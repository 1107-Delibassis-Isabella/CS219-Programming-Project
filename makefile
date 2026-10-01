PP1: opcode.o main.o
	g++ opcode.o main.o -o PP1

main.o: main.cpp opcode.h
	g++ -c main.cpp

opcode.o: opcode.h opcode.cpp
	g++ -c opcode.cpp

clean: 
	rm -f *.o PP1