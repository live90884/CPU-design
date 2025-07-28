`include "defines.v"

module exe_type_i(
    input wire rst_i,
    
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o,
    output reg reg_we_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
  
    wire isType_i;
    assign isType_i = (opcode == `INST_TYPE_I);
    
    always @(*) begin
        reg_we_o = `WRITE_ENABLE;
        reg_wdata_o = `ZERO;
        if (!(rst_i == 1 || isType_i==0)) begin
            if (opcode == `INST_TYPE_I) begin
                    case(funct3)
                        `INST_ORI: begin
                            reg_wdata_o = op1_i | op2_i;
                        end//ORI
                        `INST_ADDI: begin
                            reg_wdata_o = $signed(op1_i) + $signed(op2_i);
                        end//ADDI
                        `INST_ANDI: begin
                            reg_wdata_o = op1_i & op2_i;
                        end//ANDI
                        `INST_XORI: begin
                            reg_wdata_o = op1_i ^ op2_i;
                        end//XORI
                        `INST_SLTI: begin
                            reg_wdata_o = ($signed(op1_i) < $signed(op2_i)) ? 32'h1 : 32'h0;
                        end//SLTI
                        `INST_SLTIU: begin
                            reg_wdata_o = (op1_i < op2_i) ? 32'h1 : 32'h0;
                        end//SLTIU
                        `INST_SLLI: begin
                            if (funct7 == 7'b0000000) begin
                                reg_wdata_o = op1_i << op2_i; 
                            end
                        end//SLLI
                        `INST_SRLI: begin
                            if (funct7 == 7'b0000000) begin
                                reg_wdata_o = op1_i >> op2_i; 
                            end else if(funct7== 7'b0100000) begin
                                reg_wdata_o = $signed(op1_i) >>> op2_i[4:0];
                            end
                        end//SRLI , SRAI
                    endcase
            end//if
        end//if
    end //always
endmodule
