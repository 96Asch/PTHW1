##########################################################
##	Name: Andrew Huang				##			       
##	Studentnumber: s1913999				##
##	Date: 16-02-17					##
##########################################################

CXX?=g++
OBJECT=mylib.o
SLIB=libmine.so
SRC=src
INCLUDE=include
CFLAGS=-Wall -g

all:	lib

lib: $(SRC)/$(OBJECT) $(SLIB)

	
$(SRC)/%.o:	$(SRC)/%.cc
	$(CXX) $(CFLAGS) -fPIC -I$(INCLUDE) -c -o $@ $<
	
$(SLIB):	$(SRC)/$(OBJECT)
	$(CXX) -shared $(CFLAGS) -fPIC -o $(SLIB) $(SRC)/$(OBJECT)

clean:
	@echo Removing $(OBJECT) and $(SLIB).
	@rm -f $(SRC)/*.o *.so
