#######################################################################
# file name: Makefile
# author   : Yu Liu
# email    : <ilhanwnz@hotmail.com>
# time     : Mon 28 Jan 2019 09:41:21 PM CST
#######################################################################

DIRS := chap1
all:
	for i in $(DIRS); do \
		(cd $$i && echo "making $$i" && $(MAKE)) || exit 1; \
	done 
clean:
	for i in $(DIRS); do \
		(cd $$i && echo "cleaning $$i" && $(MAKE) clean) || exit 1; \
	done 
