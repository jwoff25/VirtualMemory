#include "PageTableEntry.h"
#include <iostream>
#include <cstddef>

using namespace std;

PageTableEntry::PageTableEntry(){
	frame = 0;
}

int PageTableEntry::getFrame(){
	return frame;
}

void PageTableEntry::setFrame(int f){
	frame = f;
}

bool PageTableEntry::isInMemory(){
	return inMemory;
}

void PageTableEntry::memFalse(){
	inMemory = false;
}

void PageTableEntry::memTrue(){
	inMemory = true;
}

void PageTableEntry::swapToDisk(int diskFrame){

}

void PageTableEntry::swapToMemory(int memFrame){

}