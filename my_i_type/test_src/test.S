.org 0x0
.global _start
_start:
    ori x4, x2, 10
    addi x5, x4, 5
    xori x6, x5, -100
    andi x7, x6, 10
    sltiu x8, x5, 6
    slti x9, x6, -5
    slli x10, x4, 2
    srli x11, x6, 3
    
