`include "defines.v"

module core_top(
    input wire rst_i,
    input wire clk_i,

    //to / from rom
    output reg  rom_ce_o,
    output reg[`ADDR_WIDTH-1:0] rom_addr_o,
    input  wire[`DATA_WIDTH-1:0] rom_data_i,


    //to/from ram 
    output reg ram_ce_o,
    output reg[`ADDR_WIDTH-1:0] ram_addr_o,
    output reg[`DATA_WIDTH-1:0] ram_wdata_o,
    input wire[`DATA_WIDTH-1:0] ram_rdata_i,
    output reg ram_we_o,

    //for int
    input wire irq_external_i,
    input wire irq_software_i,
    input wire irq_timer_i
);

assign rom_addr_o = pc_wire;
assign if_inst_o = rom_data_i;
assign rom_ce_o = ce_wire;

assign ram_ce_o    = mem_mem_ce_o;  
assign ram_addr_o  = mem_mem_addr_o;
assign ram_wdata_o = mem_mem_data_o;
assign ram_data_o = ram_rdata_i;
assign ram_we_o    = mem_mem_we_o;



wire[`ADDR_WIDTH-1:0] if_inst_addr_o;
wire[`DATA_WIDTH-1:0] if_inst_o;
wire[`DATA_WIDTH-1:0] ram_data_o; 



wire int_ctrl_interrupt_type_o;
wire int_ctrl_interrupt_en_o;
wire int_ctrl_cause_we_o;
wire[3:0] int_ctrl_trap_casue_o;
wire int_ctrl_epc_we_o;
wire[`DATA_WIDTH-1:0] int_ctrl_epc_o;
wire int_ctrl_mstatus_ie_clear_o; //for interrupt
wire int_ctrl_mstatus_ie_set_o; //for mret
wire int_ctrl_flush_o;   // clear all pipeline
wire[`DATA_WIDTH-1:0] int_ctrl_new_pc_o;   // pc_reg = new_pc_o

//interrupt ctrl
interrupt_ctrl interrupt_ctrl0(
    .clk_i(clk_i),
    .rst_i(rst_i),

    .exception_i(mem_exception_o), //from mem (mret, ecall)
    .pc_i(ctrl_pc_o),             // from mem.pc

    // from csr
    .mstatus_ie_i(csr_mstatus_ie_o),    // global interrupt enabled or not
    .mie_external_i(csr_mie_external_o),  // external interrupt enbled or not
    .mie_timer_i(csr_mie_timer_o),     // timer interrupt enabled or not
    .mie_sw_i(csr_mie_software_o),        // sw interrupt enabled or not

    .mip_external_i(csr_mip_external_o),   // external interrupt pending
    .mip_timer_i(csr_mip_timer_o),      // timer interrupt pending
    .mip_sw_i(csr_mip_software_o),         // sw interrupt pending

    .mtvec_i(csr_mtvec_o),          // the trap vector
    .epc_i(csr_epc_o),            // get the epc for the mret instruction

    //to csr
    .interrupt_type_o(int_ctrl_interrupt_type_o),
    .cause_we_o(int_ctrl_cause_we_o),
    .trap_casue_o(int_ctrl_trap_casue_o),

    .epc_we_o(int_ctrl_epc_we_o),
    .epc_o(int_ctrl_epc_o),

    .mstatus_ie_clear_o(int_ctrl_mstatus_ie_clear_o), //for interrupt
    .mstatus_ie_set_o(int_ctrl_mstatus_ie_set_o), //for mret

    /* ---signals to other stages of the pipeline  ----*/
    .interrupt_en_o(int_ctrl_interrupt_en_o),
    .new_pc_o(int_ctrl_new_pc_o)   // pc_reg = new_pc_o
);



//ctrl
wire                    ctrl_flush_jump_o;
wire                    ctrl_flush_int_o;
wire[`ADDR_WIDTH-1:0]   ctrl_new_pc_o;
wire[5:0]               ctrl_stall_o;
wire[`ADDR_WIDTH-1:0]   ctrl_pc_o;
//wire[`DATA_WIDTH-1:0]   ram_data_o;

pipe_ctrl ctrl0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    //.stallreq_from_if_i(if_stallreq_o), 
    .stallreq_from_id_i(id_stallreq_o), 
    .stallreq_from_exe_i(exe_stallreq_o),
    .jump_en_i(exe_jump_enable_o),
    .jump_addr_i(exe_jump_addr_o),
    .stall_o(ctrl_stall_o),
    .flush_jump_o(ctrl_flush_jump_o),
    .new_pc_o(ctrl_new_pc_o),
    //int_ctrl
    .int_en_i(int_ctrl_interrupt_en_o),
    .isr_pc_i(int_ctrl_new_pc_o),
    .flush_int_o(ctrl_flush_int_o),
    //for interrupt pc
    .pc_i(mem_inst_addr_o),
    .pc_o(ctrl_pc_o)

);


assign if_inst_addr_o = pc_wire;

//IF
wire[`ADDR_WIDTH-1:0]   pc_wire;
wire                    ce_wire;

pc_reg pc_reg0(
    .rst_i(rst_i),
    .clk_i(clk_i),
    //from ctrl
    .new_pc_i(ctrl_new_pc_o),
    .flush_jump_i(ctrl_flush_jump_o),
    .stall_i(ctrl_stall_o),
    //to if_id
    .pc_o(pc_wire),
    // to rom
    .ce_o(ce_wire),
    //for int
    .flush_int_i(ctrl_flush_int_o)
);


//IF/ID
// 連接 if_id 與 id 的線
wire[`ADDR_WIDTH-1:0] if_id_inst_addr_o;
wire[`DATA_WIDTH-1:0] if_id_inst_o;

if_id if_id0(
    .clk_i(clk_i), .rst_i(rst_i),
    //from if
    .inst_addr_i(if_inst_addr_o),
    .inst_i(if_inst_o),
    //from ctrl
    .stall_i(ctrl_stall_o),
    .flush_jump_i(ctrl_flush_jump_o),    
    //to id
    .inst_addr_o(if_id_inst_addr_o),
    .inst_o(if_id_inst_o),
    //for int
    .flush_int_i(ctrl_flush_int_o)
);




//ID
//id to regfile
wire[`RADDR_WIDTH-1:0]      id_reg1_addr_o;
wire[`RADDR_WIDTH-1:0]      id_reg2_addr_o;
wire                        id_reg1_re_o;
wire                        id_reg2_re_o;
// 連接 id 與 id_exe線
wire[`DATA_WIDTH-1:0]       id_inst_o;
wire[`RDATA_WIDTH-1:0]      id_op1_o;
wire[`RDATA_WIDTH-1:0]      id_op2_o;
wire                        id_reg_we_o;
wire[`RADDR_WIDTH-1:0]      id_reg_waddr_o;
wire[`ADDR_WIDTH-1:0]       id_inst_addr_o;
wire                        id_stallreq_o; 
wire                        id_csr_we_o;
wire[`CSR_ADDR_WIDTH-1:0]   id_csr_addr_o;
wire[`DATA_WIDTH-1:0]       id_exception_o;


id id0(
    .rst_i(rst_i),

    //from if_id
    .inst_addr_i(if_id_inst_addr_o),
    .inst_i(if_id_inst_o),

    //from regfile
    .reg1_rdata_i(reg1_data_o),
    .reg2_rdata_i(reg2_data_o),

    //from exe
    .exe_reg_waddr_i(exe_reg_waddr_o),
    .exe_reg_wdata_i(exe_reg_wdata_o),
    .exe_reg_we_i(exe_reg_we_o),

    //from id_exe
    .pre_inst_is_load_i(id_exe_inst_is_load_o),
    .exe_rd_i(id_exe_rd_o),

    //from mem
    .mem_reg_waddr_i(mem_reg_waddr_o),
    .mem_reg_wdata_i(mem_reg_wdata_o),
    .mem_reg_we_i(mem_reg_we_o),


    //to regfile
    .reg1_raddr_o(id_reg1_addr_o),
    .reg2_raddr_o(id_reg2_addr_o),
    .reg1_re_o(id_reg1_re_o),
    .reg2_re_o(id_reg2_re_o),

    //to ctrl
    .stallreq_o(id_stallreq_o),

    //to id_exe
    .inst_o(id_inst_o),
    .op1_o(id_op1_o),
    .op2_o(id_op2_o),
    .reg_we_o(id_reg_we_o),
    .reg_waddr_o(id_reg_waddr_o),
    .inst_addr_o(id_inst_addr_o),

    //for csr
    //to id_exe
    .csr_we_o(id_csr_we_o),
    .csr_addr_o(id_csr_addr_o),
    //for exception
    .exception_o(id_exception_o)

);
    

//ID_EXE
//id_exe to exe
wire[`RDATA_WIDTH-1:0]      id_exe_op1_o;
wire[`RDATA_WIDTH-1:0]      id_exe_op2_o;
wire                        id_exe_reg_we_o;
wire[`RADDR_WIDTH-1:0]      id_exe_reg_waddr_o;
wire[`DATA_WIDTH-1:0]       id_exe_inst_o;
wire[`ADDR_WIDTH-1:0]       id_exe_inst_addr_o;

//to id
//for load-use hazard
wire                        id_exe_inst_is_load_o;
wire[`RADDR_WIDTH-1:0]      id_exe_rd_o;

wire                        id_exe_csr_we_o;
wire[`CSR_ADDR_WIDTH-1:0]   id_exe_csr_addr_o;
wire[`DATA_WIDTH-1:0]       id_exe_exception_o;



id_exe id_exe0(
    .rst_i(rst_i), .clk_i(clk_i),

    //from id
    .op1_i(id_op1_o),
    .op2_i(id_op2_o),
    .reg_we_i(id_reg_we_o),
    .reg_waddr_i(id_reg_waddr_o),
    .inst_i(id_inst_o),
    .inst_addr_i(id_inst_addr_o),


    //to id
    .inst_is_load_o(id_exe_inst_is_load_o),
    .rd_o(id_exe_rd_o),

    //from ctrl
    .stall_i(ctrl_stall_o),
    .flush_jump_i(ctrl_flush_jump_o),

    //to exe
    .op1_o(id_exe_op1_o),
    .op2_o(id_exe_op2_o),
    .reg_we_o(id_exe_reg_we_o),
    .reg_waddr_o(id_exe_reg_waddr_o),
    .inst_addr_o(id_exe_inst_addr_o),
    .inst_o(id_exe_inst_o),

    //for csr
    //from id
    .csr_we_i(id_csr_we_o),
    .csr_addr_i(id_csr_addr_o),
    //to exe
    .csr_we_o(id_exe_csr_we_o),
    .csr_addr_o(id_exe_csr_addr_o),
    //for int 
    .flush_int_i(ctrl_flush_int_o),
    //for exception
    .exception_i(id_exception_o),
    .exception_o(id_exe_exception_o)

);


    

//EXE
wire[`RADDR_WIDTH-1:0]      exe_reg_waddr_o;
wire                        exe_reg_we_o;
wire[`RDATA_WIDTH-1:0]      exe_reg_wdata_o;
wire[`ADDR_WIDTH-1:0]       exe_mem_addr_o;
wire                        exe_mem_we_o;
wire[`DATA_WIDTH-1:0]       exe_mem_data_o;
wire[3:0]                   exe_mem_op_o;
//to ctrl
wire                        exe_stallreq_o;
wire                        exe_jump_enable_o;
wire[`ADDR_WIDTH-1:0]       exe_jump_addr_o;

//for csr 
wire                        exe_csr_we_o;
wire[`CSR_ADDR_WIDTH-1:0]   exe_csr_waddr_o;
wire[`DATA_WIDTH-1:0]       exe_csr_wdata_o;
wire[`CSR_ADDR_WIDTH-1:0]   exe_csr_raddr_o;
wire[`DATA_WIDTH-1:0]       exe_inst_addr_o;
wire[`DATA_WIDTH-1:0]       exe_exception_o;

exe exe0(
    .rst_i(rst_i),.clk_i(clk_i),
    
    //from id_exe
    .op1_i(id_exe_op1_o), 
    .op2_i(id_exe_op2_o),
    .reg_we_i(id_exe_reg_we_o), 
    .reg_waddr_i(id_exe_reg_waddr_o),
    .inst_i(id_exe_inst_o),
    .inst_addr_i(id_exe_inst_addr_o),

    //to exe_mem
    .reg_waddr_o(exe_reg_waddr_o), 
    .reg_we_o(exe_reg_we_o), 
    .reg_wdata_o(exe_reg_wdata_o),
    .mem_addr_o(exe_mem_addr_o),
    .mem_data_o(exe_mem_data_o),
    .mem_we_o(exe_mem_we_o),
    .mem_op_o(exe_mem_op_o),

    //to pipe_ctrl
    .jump_addr_o(exe_jump_addr_o),
    .jump_enable_o(exe_jump_enable_o),
    .stallreq_o(exe_stallreq_o),

    //for csr
    //from id_exe
    .csr_addr_i(id_exe_csr_addr_o),
    .csr_we_i(id_exe_csr_we_o),
    //to exe_mem
    .csr_we_o(exe_csr_we_o),
    .csr_waddr_o(exe_csr_waddr_o),
    .csr_wdata_o(exe_csr_wdata_o),
    //to/from csr_file
    .csr_rdata_i(csr_file_csr_rdata_o),
    .csr_raddr_o(exe_csr_raddr_o),
    //for csr data depandency
    //mem forward
    .mem_csr_we_i(mem_csr_we_o),
    .mem_csr_waddr_i(mem_csr_waddr_o),
    .mem_csr_wdata_i(mem_csr_wdata_o),
    //for int
    .inst_addr_o(exe_inst_addr_o),
    .flush_int_i(ctrl_flush_int_o),
    //for exception
    .exception_i(id_exe_exception_o),
    .exception_o(exe_exception_o)

);

//exe_mem
wire[`RADDR_WIDTH-1:0]      exe_mem_reg_waddr_o;
wire                        exe_mem_reg_we_o;
wire[`RDATA_WIDTH-1:0]      exe_mem_reg_wdata_o;
wire[`ADDR_WIDTH-1:0]       exe_mem_mem_addr_o;
wire                        exe_mem_mem_we_o;
wire[`DATA_WIDTH-1:0]       exe_mem_mem_data_o;
wire[3:0]                   exe_mem_mem_op_o;
//for csr to mem 
wire                        exe_mem_csr_we_o;
wire[`CSR_ADDR_WIDTH-1:0]   exe_mem_csr_waddr_o;
wire[`DATA_WIDTH-1:0]       exe_mem_csr_wdata_o;

wire[`DATA_WIDTH-1:0]       exe_mem_inst_addr_o;
wire[`DATA_WIDTH-1:0]       exe_mem_exception_o;

exe_mem exe_mem0(
    .rst_i(rst_i), .clk_i(clk_i),
    
    //from exe
    .reg_waddr_i(exe_reg_waddr_o), 
    .reg_we_i(exe_reg_we_o), 
    .reg_wdata_i(exe_reg_wdata_o),
    .mem_addr_i(exe_mem_addr_o),
    .mem_data_i(exe_mem_data_o),
    .mem_we_i(exe_mem_we_o),
    .mem_op_i(exe_mem_op_o),    
  
    //to mem
    .reg_waddr_o(exe_mem_reg_waddr_o), 
    .reg_we_o(exe_mem_reg_we_o), 
    .reg_wdata_o(exe_mem_reg_wdata_o),
    .mem_addr_o(exe_mem_mem_addr_o),
    .mem_data_o(exe_mem_mem_data_o),
    .mem_we_o(exe_mem_mem_we_o),
    .mem_op_o(exe_mem_mem_op_o),

    //for csr
    //from exe
    .csr_we_i(exe_csr_we_o),
    .csr_waddr_i(exe_csr_waddr_o),
    .csr_wdata_i(exe_csr_wdata_o),
    //to mem
    .csr_we_o(exe_mem_csr_we_o),
    .csr_waddr_o(exe_mem_csr_waddr_o),
    .csr_wdata_o(exe_mem_csr_wdata_o),
    //for interrupt ctrl
    .inst_addr_i(exe_inst_addr_o),
    .inst_addr_o(exe_mem_inst_addr_o),
    .flush_int_i(ctrl_flush_int_o),
    //for exception
    .exception_i(exe_exception_o),
    .exception_o(exe_mem_exception_o)

);

//mem
//mem
wire[`RADDR_WIDTH-1:0]      mem_reg_waddr_o;
wire                        mem_reg_we_o;
wire[`RDATA_WIDTH-1:0]      mem_reg_wdata_o;
wire[`ADDR_WIDTH-1:0]       mem_mem_addr_o;
wire                        mem_mem_we_o;
wire[`DATA_WIDTH-1:0]       mem_mem_data_o;
wire                        mem_mem_ce_o;
wire[`ADDR_WIDTH-1:0]       mem_inst_addr_o;
//for csr to mem_wb
wire                        mem_csr_we_o;
wire[`CSR_ADDR_WIDTH-1:0]   mem_csr_waddr_o;
wire[`DATA_WIDTH-1:0]       mem_csr_wdata_o;
wire[`DATA_WIDTH-1:0]       mem_exception_o;


mem mem0(
    .rst_i(rst_i),.clk_i(clk_i),
    
    //from exe_mem
    .reg_waddr_i(exe_mem_reg_waddr_o), 
    .reg_we_i(exe_mem_reg_we_o), 
    .reg_wdata_i(exe_mem_reg_wdata_o),
    .mem_addr_i(exe_mem_mem_addr_o),
    .mem_data_i(exe_mem_mem_data_o),
    .mem_we_i(exe_mem_mem_we_o),
    .mem_op_i(exe_mem_mem_op_o),  
    
    //from ram
    .ram_data_i(ram_data_o),
    //to ram
    .ram_addr_o(mem_mem_addr_o),
    .ram_data_o(mem_mem_data_o),
    .ram_w_request_o(mem_mem_we_o),
    .ram_ce_o(mem_mem_ce_o),

    //to mem_wb
    .reg_waddr_o(mem_reg_waddr_o), 
    .reg_we_o(mem_reg_we_o), 
    .reg_wdata_o(mem_reg_wdata_o),

    //for csr
    //from exe_mem
    .csr_we_i(exe_mem_csr_we_o),
    .csr_waddr_i(exe_mem_csr_waddr_o),
    .csr_wdata_i(exe_mem_csr_wdata_o),
    //to mem_wb
    .csr_we_o(mem_csr_we_o),
    .csr_waddr_o(mem_csr_waddr_o),
    .csr_wdata_o(mem_csr_wdata_o),
    //for int
    .inst_addr_i(exe_mem_inst_addr_o),
    .inst_addr_o(mem_inst_addr_o),
    //for exception
    .exception_i(exe_mem_exception_o),
    .exception_o(mem_exception_o)

);

//mem_wb
wire[`RADDR_WIDTH-1:0]      mem_wb_reg_waddr_o;
wire                        mem_wb_reg_we_o;
wire[`RDATA_WIDTH-1:0]      mem_wb_reg_wdata_o;
//for csr
wire                        mem_wb_csr_we_o;
wire[`CSR_ADDR_WIDTH-1:0]   mem_wb_csr_waddr_o;
wire[`RDATA_WIDTH-1:0]      mem_wb_csr_wdata_o;
wire                        mem_wb_instret_incr_o;

mem_wb mem_wb0(
    .rst_i(rst_i), .clk_i(clk_i),
    // from mem
    .reg_waddr_i(mem_reg_waddr_o), 
    .reg_we_i(mem_reg_we_o), 
    .reg_wdata_i(mem_reg_wdata_o),    
   
    //to regfile
    .reg_waddr_o(mem_wb_reg_waddr_o), 
    .reg_we_o(mem_wb_reg_we_o), 
    .reg_wdata_o(mem_wb_reg_wdata_o),

    //for csr
    //from mem
    .csr_we_i(mem_csr_we_o),
    .csr_waddr_i(mem_csr_waddr_o),
    .csr_wdata_i(mem_csr_wdata_o),
    //to csr_file
    //to csr
    .csr_we_o(mem_wb_csr_we_o),
    .csr_waddr_o(mem_wb_csr_waddr_o),
    .csr_wdata_o(mem_wb_csr_wdata_o),
    .instret_incr_o(mem_wb_instret_incr_o),
    //from interrupt ctrl
    .flush_int_i(ctrl_flush_int_o)

);
    
//wb

//regfile 對外接線
wire[`RDATA_WIDTH-1:0] reg1_data_o;
wire[`RDATA_WIDTH-1:0] reg2_data_o;

regfile regfile0(
    .rst_i(rst_i), .clk_i(clk_i),

    //from wb
    .waddr_i(mem_wb_reg_waddr_o), 
    .we_i(mem_wb_reg_we_o), 
    .wdata_i(mem_wb_reg_wdata_o),
    //from id
    .re1_i(id_reg1_re_o),
    .raddr1_i(id_reg1_addr_o),
    .re2_i(id_reg2_re_o),
    .raddr2_i(id_reg2_addr_o),

    //to id
    .rdata1_o(reg1_data_o),
    .rdata2_o(reg2_data_o)
);


wire [`DATA_WIDTH-1:0] csr_file_csr_rdata_o;
wire csr_mstatus_ie_o;
wire csr_mie_external_o;
wire csr_mie_timer_o;
wire csr_mie_software_o;
    
wire csr_mip_external_o;
wire csr_mip_timer_o;
wire csr_mip_software_o;
wire[`DATA_WIDTH-1:0]  csr_mtvec_o;
wire[`DATA_WIDTH-1:0]  csr_epc_o;

csr_file csr0(
    .clk_i(clk_i),
    .rst_i(rst_i),
    .raddr_i(exe_csr_raddr_o),
    .rdata_o(csr_file_csr_rdata_o),
    .we_i(mem_wb_csr_we_o),
    .waddr_i(mem_wb_csr_waddr_o),
    .wdata_i(mem_wb_csr_wdata_o),
    .instret_incr_i(mem_wb_instret_incr_o),
    //for interrupt
    .irq_timer_i(irq_timer_i),
    .irq_software_i(irq_software_i),  
    .irq_external_i(irq_external_i),  
    .interrupt_type_i(int_ctrl_interrupt_type_o),
    .cause_we_i(int_ctrl_cause_we_o),
    .cause_i(int_ctrl_trap_casue_o),
    .epc_we_i(int_ctrl_epc_we_o),
    .epc_i(int_ctrl_epc_o),
    .mstatus_ie_clear_i(int_ctrl_mstatus_ie_clear_o),
    .mstatus_ie_set_i(int_ctrl_mstatus_ie_set_o),

    .mstatus_ie_o(csr_mstatus_ie_o),
    .mie_external_o(csr_mie_external_o),
    .mie_timer_o(csr_mie_timer_o),
    .mie_software_o(csr_mie_software_o),
    .mip_external_o(csr_mip_external_o),
    .mip_timer_o(csr_mip_timer_o),
    .mip_software_o(csr_mip_software_o),
    .mtvec_o(csr_mtvec_o),
    .epc_o(csr_epc_o)

    );

endmodule

