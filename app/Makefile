CXX?=g++
OBJECT=test.o
INCLUDE=../lib/include
CFLAGS=-Wall
MAKE=make 
LIB=..
LIBP=../lib
TEST=${workspace_loc:/${ProjName}/lib}

all:	lib test 

lib:
	@echo Make library
	@+$(MAKE) -C $(LIBP)
		
%.o:	%.cc
	@echo Making %.o
	@$(CXX) -I$(INCLUDE) $(CFLAGS) -c -o $@ $<

test: $(OBJECT)
	@echo Linking shared library
	$(CXX) $(CFLAGS) -I$(INCLUDE) -L$(TEST) -o test test.o -lmine
	
clean:
	@echo Removing $(OBJECT).
	@rm -f *.o $(OBJECT)
	@+$(MAKE) -C $(LIBP) $@
	@echo Finished Clean