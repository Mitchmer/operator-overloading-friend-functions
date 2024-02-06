CC = g++
FLAGS = -std=c++20 -g -Wall
OBJS = employee.o programmer.o architect.o

all: hw04

hw04: hw04.cpp employee.o programmer.o architect.o
	$(CC) $(FLAGS) hw04.cpp -o hw04 $(OBJS)

employee.o: employee.cpp employee.h
	$(CC) $(FLAGS) -c employee.cpp -o employee.o

programmer.o: programmer.cpp programmer.h
	$(CC) $(FLAGS) -c programmer.cpp -o programmer.o

architect.o: architect.cpp architect.h
	$(CC) $(FLAGS) -c architect.cpp -o architect.o

clean:
	rm -f *.o hw04 hw04.tar

tar:
	tar cf hw04.tar hw04.scr Makefile hw04.cpp employee.h employee.cpp programmer.h programmer.cpp architect.h architect.cpp
