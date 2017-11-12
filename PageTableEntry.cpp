#include "PageTableEntry.h"

PageTableEntry::PageTableEntry(){

}

int PageTableEntry::getFrame(){
	return frame;
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