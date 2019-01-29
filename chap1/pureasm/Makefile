#######################################################################
# file name: Makefile
# author   : Yu Liu
# email    : <ilhanwnz@hotmail.com>
# time     : Mon 28 Jan 2019 09:47:30 PM CST
#######################################################################

PROGS := insertion_sort linear_search
GENERAL_FILE := general_asm.S
CC = gcc
CFLAGS += -m32 
all: $(PROGS)

%: %.S
	$(CC) $(CFLAGS) $@.S $(GENERAL_FILE) -o $@

clean:
	rm $(PROGS) -rf
