`include "defines.v"

module exe(
    input wire rst_i,
    
    //from id_exe
    input wire[`DATA_WIDTH-1:0] op1_i,
    input wire[`DATA_WIDTH-1:0] op2_i,
    input wire reg_we_i,
    input wire[`RADDR_WIDTH-1:0] reg_waddr_i,
    input wire[`RDATA_WIDTH-1:0] inst_i,
    //to exe_mem
    output reg[`RADDR_WIDTH-1:0] reg_waddr_o,
    output reg reg_we_o,
    output reg[`RDATA_WIDTH-1:0] reg_wdata_o
);

    wire[6:0] opcode = inst_i[6:0];
    wire[2:0] funct3 = inst_i[14:12];
    wire[6:0] funct7 = inst_i[31:25];
    wire[4:0] shamt  = inst_i[24:20];

    always @(*) begin
        if (rst_i == 1) begin
            reg_waddr_o = `ZERO_REG;
            reg_wdata_o = `ZERO;
            reg_we_o = `WRITE_DISABLE;
        end else begin
	    reg_we_o = reg_we_i;
            case (opcode)
                `INST_TYPE_I:begin
                    case(funct3)
                        `INST_ADDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i + op2_i;
                        end//ADDI
                        `INST_SLTI: begin
                            reg_waddr_o = reg_waddr_i;
                            if ($signed(op1_i) < $signed(op2_i)) begin
                                reg_wdata_o = `ONE;
                            end else begin
                                reg_wdata_o = `ZERO;
                            end
                        end//SLTI
                        `INST_SLTIU: begin
                            reg_waddr_o = reg_waddr_i;
                            if (op1_i < op2_i) begin
                                reg_wdata_o = `ONE;
                            end else begin
                                reg_wdata_o = `ZERO;
                            end
                        end//SLTIU
                        `INST_XORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i ^ op2_i;
                        end//XORI
                        `INST_ORI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i | op2_i;
                        end//ORI
                        `INST_ANDI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i & op2_i;
                        end//ANDI
                        `INST_SLLI: begin
                            reg_waddr_o = reg_waddr_i;
                            reg_wdata_o = op1_i << shamt;
                        end//SLLI
                        `INST_SRI: begin
                            reg_waddr_o = reg_waddr_i;
                            case (funct7)
                                `INST_SRLI: begin
                                    reg_wdata_o = op1_i >> shamt;
                                end 
                                `INST_SRAI: begin
                                    reg_wdata_o = $signed(op1_i) >>> shamt;
                                end
                                default: begin
                                    reg_waddr_o = `ZERO_REG;
                                    reg_wdata_o = `ZERO;
			                        reg_we_o = `WRITE_DISABLE;
                                end
                            endcase
                        end//SLLI
                        default: begin
                            reg_waddr_o = `ZERO_REG;
                            reg_wdata_o = `ZERO;
			                reg_we_o = `WRITE_DISABLE;
                        end//default
                    endcase
		        end
                default:begin
                        reg_waddr_o = `ZERO_REG;
                        reg_wdata_o = `ZERO;
                        reg_we_o = `WRITE_DISABLE;
                end 
            endcase
        end //if
    end //always

endmodule
