#******************************************************************************
# Copyright (C) 2017 by Alex Fosdick - University of Colorado
#
# Redistribution, modification or use of this software in source or binary
# forms is permitted as long as the files maintain this copyright. Users are 
# permitted to modify this and use it to learn about the field of embedded
# software. Alex Fosdick and the University of Colorado are not liable for any
# misuse of this material. 
#
#*****************************************************************************

#------------------------------------------------------------------------------
# Makefile is a file of type "makefile" that supports two target platforms : MSP432 and HOST.
#
# Use: make [TARGET] [PLATFORM-OVERRIDES]
#
# Build Targets:
#      .o - Builds an objecct file. 
#      .i - Builds .i preprocessed file
#      .asm - Assembly file
#      .d - Builds dependecy file
#      
#      compile all - Compiles all source files in the project
#      build all - Builds all object files in project
#      clean - Removes all non-source and generated files
#
# Platform Overrides:
#      PLATFORM - HOST
#      PLATFORM - MSP432
#      
#------------------------------------------------------------------------------
include sources.mk

# Platform Overrides
PLATFORM = HOST \
           MSP432


# Configuration for both platforms 
CFLAGS = -std=c99 \
		 -g \
		 -O0 \
		 -Wall \
		 -Werror

# MSP432

ifeq($(PLATFORM), MSP432)

	LINKER_FILE = -T msp432p401r.lds

	# Architecture Specific Flags
	CFLAGS = $(CFLAGS)
	CPPFLAGs = -DMSP432 $(INCLUDES)
	LDFLAGS = -Wl, -Map=$(TARGET).map \
                  -L ../$(LINKER_FILE)
	OBJDUMP = arm-none-eabi-objdump

	# Compiler Flags and Defines

	CC = arm-none-eabi-gcc
	LD = arm-none-eabi-ld

else ifeq($(PLATFORM), HOST)

	# Architectures Specific Flags

	CPU = cortex-m4
	ARCH = thumb
	SPECS = nosys.specs
	FPU = fpv4-sp-d16
	march = armv7e-m
	mfloat-abi = hard
	CFLAGS = $(CFLAGS)
	CPPFLAGS = -DHOST $(INCLUDES)
	LDFLGS = -Wl, -Map=$(TARGET).map
	OBJDUMP = objdump
	# Compiler Flags and Defines
	
	CC = gcc
	LD = ld
endif

#Object file
OBJS = $(SOURCES:.c=.o)

#Dependencies 
DEPS = $(SOURCES:.c=.d)

#Assembly File
ASMS = $(SOURCES:.c=.asm)

#Preprocessing
PRE = $(SOURCES:.c=.i)


# % operator

%.o : %.c
	$(CC) -c $< $(CFLAGS) $(CPPFLAGS) -o $@

%.asm : %.c
	$(CC) -S $< $(CFLAGS) $(CPPFLAGS) -o $@

%.i : %.c
	$(CC) -E -M $< $(CPPFLAGS) -o $@

$(TARGET).asm: $(TARGET).out
	$(OBDJUMP) -d $(TARGET).out >> $@


.PHONY: clean
clean:
	rm -f *.o *.i *.asm *.d *.out $(TARGET).map

