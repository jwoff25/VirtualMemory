all: vm
	
vm: main.o parser.o
	g++ main.o parser.o -o vm

main.o: main.cpp
	g++ -c -Wall main.cpp

parser.o: parser.cpp
	g++ -c -Wall parser.cpp

clean:
	rm -f *.o