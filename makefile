all: vm
	
vm: main.o parser.o ProcessTable.o Memory.o PageTable.o Disk.o PageTableEntry.o
	g++ main.o parser.o -o vm

main.o: main.cpp
	g++ -c -Wall main.cpp

parser.o: parser.cpp
	g++ -c -Wall parser.cpp

ProcessTable.o: ProcessTable.cpp
	g++ -c -Wall ProcessTable.cpp

Memory.o: Memory.cpp
	g++ -c -Wall Memory.cpp

PageTable.o: PageTable.cpp
	g++ -c -Wall PageTable.cpp

Disk.o: Disk.cpp
	g++ -c -Wall Disk.cpp

PageTableEntry.o: PageTableEntry.cpp
	g++ -c -Wall PageTableEntry.cpp

clean:
	rm -f *.o