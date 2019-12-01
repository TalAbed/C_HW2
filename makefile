CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIB=myBank.o
FLAGS= -Wall -g

all: OUT
OUT: $(OBJECTS_MAIN) 
	$(CC) $(FLAGS) -o OUT $(OBJECTS_MAIN) myBank.o
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c
main.o: main.c myBank.o
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so OUT
