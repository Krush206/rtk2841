# Taken from perf makefile
uname_M := $(shell uname -m 2>/dev/null || echo not)
#ARCH ?= $(shell echo $(uname_M) | sed -e s/i.86/i386/)
ifeq ($(ARCH),i386)
        ARCH := x86
endif
ifeq ($(ARCH),x86_64)
	ARCH := x86
endif


all:
ifeq ($(ARCH),x86)
	gcc watchpoint_test.c -o watchpoint_test
else
	../../../../../../system/tmp/toolchain/asdk-5.4.1-a53-EL-4.4-g2.23-a32nt-161027/bin/asdk-linux-gcc -g watchpoint_test.c -o watchpoint_test
#	echo "Not an x86 target, can't build breakpoints selftests"
endif

#run_tests:
#	./watchpoint_test

clean:
	rm -fr watchpoint_test
