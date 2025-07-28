# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtest_top.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtest_top \
	Vtest_top___024root__DepSet_h42a14747__0 \
	Vtest_top___024root__DepSet_h87f2c825__0 \
	Vtest_top_test_top__DepSet_hb0c4956c__0 \
	Vtest_top_regfile__DepSet_ha3de29b4__0 \
	Vtest_top_regfile__DepSet_he93ded98__0 \
	Vtest_top_dpram__R200000_RB15__DepSet_h92412695__0 \
	Vtest_top_dpram__R200000_RB15__DepSet_hb8d2e877__0 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtest_top___024root__Slow \
	Vtest_top___024root__DepSet_h42a14747__0__Slow \
	Vtest_top___024root__DepSet_h87f2c825__0__Slow \
	Vtest_top_test_top__Slow \
	Vtest_top_test_top__DepSet_hb0c4956c__0__Slow \
	Vtest_top_test_top__DepSet_hd6579a40__0__Slow \
	Vtest_top_regfile__Slow \
	Vtest_top_regfile__DepSet_he93ded98__0__Slow \
	Vtest_top_dpram__R200000_RB15__Slow \
	Vtest_top_dpram__R200000_RB15__DepSet_hb8d2e877__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtest_top__Dpi \
	Vtest_top__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtest_top__Syms \
	Vtest_top__Trace__0__Slow \
	Vtest_top__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
