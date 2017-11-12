#include "Memory.h"
#include "PageTableEntry.h"
#include <cstddef>

static int nextFrame = 0;

Memory::Memory(){

}

void Memory::setFrame(int frame, PageTableEntry *pte){
	frames[frame] = pte;
}

PageTableEntry* Memory::getFrame(int frame){
	return frames[frame];
}

int Memory::getFreePage(){
	nextFrame = nextFrame % 30;
	PageTableEntry* pt = getFrame(nextFrame);
	if (frames[nextFrame] != (PageTableEntry*)NULL){
		pt->memFalse();
		frames[nextFrame] = (PageTableEntry*)NULL;
	}
	return nextFrame++;
}

int Memory::findSwapPage(){
	return 0;
}

int Memory::convert(int frame){
	return 0;
}