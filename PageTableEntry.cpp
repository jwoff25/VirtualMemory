#include "PageTableEntry.h"

inline PageTableEntry::PageTableEntry(){

}

int PageTableEntry::getFrame(){
	return 0;
}

bool PageTableEntry::isInMemory(){
	return false;
}

void PageTableEntry::swapToDisk(int diskFrame){

}

void PageTableEntry::swapToMemory(int memFrame){

}