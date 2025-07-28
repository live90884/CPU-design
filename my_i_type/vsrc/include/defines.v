`define RNUM         32
`define ADDR_WIDTH   32
`define RADDR_WIDTH  5
`define DATA_WIDTH   32
`define RDATA_WIDTH  32
`define MEM_SIZE    32'h200000
`define MEM_OFFSET  0
`define PART_ADDR_WIDTH 21

`define ONE         32'b1
`define ZERO        32'h0
`define ZERO_REG    0
`define WRITE_ENABLE    1'b1
`define READ_ENABLE     1'b1
`define WRITE_DISABLE   1'b0
`define READ_DISABLE    1'b0


`define NOP   0 
`define INST_TYPE_I 	7'b0010011
`define INST_ADDI	3'b000
`define INST_SLTI	3'b010
`define INST_SLTIU	3'b011
`define INST_XORI	3'b100		
`define INST_ORI	3'b110
`define INST_ANDI	3'b111
`define INST_SLLI	3'b001
`define INST_SRI	3'b101
`define INST_SRLI	7'b0000000
`define INST_SRAI	7'b0100000	
