`include "defines.v"

module exe_type_r(
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

    wire isType_r;
    assign isType_r = (opcode == `INST_TYPE_R_M) && ((funct7 == 7'b0000000)||(funct7==7'b0100000));

    always @(*) begin
        reg_we_o = `WRITE_ENABLE;
        reg_wdata_o = `ZERO;
        if (!(rst_i == 1 || isType_r==1'b0)) begin
            case(funct3)
                    `INST_OR: begin
                        reg_wdata_o = op1_i | op2_i;
                    end//ORI
                    `INST_ADD: begin  //'INST_ADD==INST_SUB==000
                        if (funct7==7'b0000000) begin
                            reg_wdata_o = $signed(op1_i) + $signed(op2_i);
                        end else if (funct7==7'b0100000) begin
                            reg_wdata_o = $signed(op1_i) - $signed(op2_i);
                        end
                    end
                    `INST_SRL: begin  //SRL==SRA ==101
                        if (funct7==7'b0000000) begin  //SRL
                            reg_wdata_o = op1_i >> op2_i[4:0];
                        end else if (funct7==7'b0100000) begin //SRA
                            reg_wdata_o = $signed(op1_i) >>> op2_i[4:0];
                        end
                    end
                    `INST_SLL: begin
                            reg_wdata_o = op1_i << op2_i[4:0];
                    end//SLL
                    `INST_SLT: begin
                            reg_wdata_o = ($signed(op1_i) < $signed(op2_i)) ? 32'h1 : 32'h0;
                    end//SLT
                    `INST_SLTU: begin
                            reg_wdata_o = (op1_i < op2_i) ? 32'h1 : 32'h0;
                    end//SLTU
                    `INST_XOR: begin
                            reg_wdata_o = op1_i ^ op2_i; 
                    end//XOR                        
                    `INST_AND: begin
                            reg_wdata_o = op1_i & op2_i; 
                    end//AND
            endcase
        end 
    end //always
endmodule
