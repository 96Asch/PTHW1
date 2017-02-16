CXX?=g++
OBJECT=test.o
INCLUDE=../lib/include
CFLAGS=-Wall -g
MAKE=make 
LIB=..
LIBP=../lib

all:	lib test

lib:
	@echo Make library
	@+$(MAKE) -C $(LIBP)

test: $(OBJECT)
	@echo Linking shared library
	@$(CXX) $(CFLAGS) -I$(INCLUDE) -L$(LIBP) -o $@ $(OBJECT) -lmine

%.o:	%.cc
	@echo Making $(%).o
	@$(CXX) -I$(INCLUDE) $(CFLAGS) -c -o $@ $<
	
	
clean:
	@echo Removing $(OBJECT) and test.
	@rm -f *.o $(OBJECT) test
	@+$(MAKE) -C $(LIBP) $@
	@echo Finished Clean
