#######################################################################
# file name: cplusplus/Makefile
# author   : Yu Liu
# email    : <ilhanwnz@hotmail.com>
# time     : Mon 28 Jan 2019 09:43:31 PM CST
#######################################################################

PROGS := insertion_sort linear_search
CC = g++ 

all: $(PROGS)

%: %.cpp	
	$(CC) $@.cpp -o $@
clean:
	rm $(PROGS) -rf
