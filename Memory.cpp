#include "Memory.h"
#include "PageTableEntry.h"

inline Memory::Memory(){

}

void Memory::setFrame(int frame, PageTableEntry *pte){

}

PageTableEntry Memory::*getFrame(int frame){
	return 0;
}

int Memory::getFreePage(){
	return 0;
}

int Memory::findSwapPage(){
	return 0;
}

int Memory::convert(int frame){
	return 0;
}