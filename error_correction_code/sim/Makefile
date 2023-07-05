######################################################################
#
# DESCRIPTION: Verilator Example: Small Makefile
#
# This calls the object directory makefile.  That allows the objects to
# be placed in the "current directory" which simplifies the Makefile.
#
# This file ONLY is placed under the Creative Commons Public Domain, for
# any use, without warranty, 2020 by Wilson Snyder.
# SPDX-License-Identifier: CC0-1.0
#
######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

.PHONY = all run clean comp
.DEFAULT_GOAL := all
# default: all

######################################################################
# Set up variables

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

VERILATOR_FLAGS =
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe --timing
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
# VERILATOR_FLAGS += -Os -x-assign 0
VERILATOR_FLAGS += -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
VERILATOR_FLAGS += -Wno-lint

# Make waveforms
VERILATOR_FLAGS += --trace
# VERILATOR_FLAGS += --trace-fst

# Check SystemVerilog assertions
# VERILATOR_FLAGS += --assert
# Generate coverage analysis
# VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

VERILATOR_FLAGS += +librescan +libext+.v+.sv+.vh+.svh
VERILATOR_FLAGS += --top-module top

# Input files for Verilator
VERILATOR_INPUT = -f filelist.f sim_main.cpp

######################################################################

no_wave: clean compile run
all: clean compile run wave
# all: clean compile run

wave:
# 	this is to open gtkwave to view the waveform
# 	for this to work properly in 'make all' make sure there is a finish in the tb
	gtkwave -a waves.gtkw logs/vlt_dump.vcd

compile:
	@echo
	@echo "-- Verilator tracing example"

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo
	@echo "-- BUILD -------------------"
# To compile, we can either
# 1. Pass --build to Verilator by editing VERILATOR_FLAGS above.
# 2. Or, run the make rules Verilator does:
	$(MAKE) -j -C obj_dir -f Vtop.mk
# 3. Or, call a submakefile where we can override the rules ourselves:
# 	$(MAKE) -j -C obj_dir -f ../Makefile_obj

run:
	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace
### TO NOT dump a VCD user
# 	obj_dir/Vtop

# 	@echo
# 	@echo "-- COVERAGE ----------------"
# 	@rm -rf logs/annotated
# 	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- DONE --------------------"
# 	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo

######################################################################
# Other targets

# you can change the TEST_NAME from the commandline by calling make in the following fashion
# make comp TEST_NAME=test_hazard_xor
# make sure there are no spaces after the testname
TEST_NAME ?= test_simple

comp:
	rm -rf *.out
	riscv64-unknown-elf-as "test_cases/$(TEST_NAME).s" -o "$(TEST_NAME).out"
# ### adding extra $ in here to make sure the terminal see's the correct number of $
	riscv64-unknown-elf-objdump -d "$(TEST_NAME).out" | sed 1,7d | awk '{print $$2}' | sed '/</d' | sed '/^$$/d' > instr_file
	rm -rf *.out

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core

