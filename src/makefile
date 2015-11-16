vpath %.h ../headers
#vpath is used to add search paths for (source) files - here header files 


INCLUDEDIR= ../headers/
INC = -I $(INCLUDEDIR)
#these are makefile variables - this is a way of generating the 
# " -I ../headers/ " prefix for the include files

FLAGS=-g -Wall
# g is the DEBUG code compiler flag -Wall configures compiler warnings

all :	randomPrime
#all is the 1st target, 'make all' & 'make' have the same effect



randomPrime : randomPrime.cpp prime.o 
	g++ $(FLAGS) $(INC) randomPrime.cpp prime.o -o randomPrime

#the randomPrime target depends on its cpp & the prime object file
#the -o specifies the name of the output file
#the build rule is the normal to compile/link - if you run make, you can see how the 
#variables in the $() expressions are expanded


#the following rule builds object code (without linking into an executable -c)

prime.o : prime.cpp prime.h
	g++ $(FLAGS) $(INC) -c prime.cpp -o prime.o


#clean is a phoney target - it doesn't build anything, but deletes all the .o files & the executable
#-r is recursive, -f is force (no query)
clean:
	rm -rf *o randomPrime *dSYM
