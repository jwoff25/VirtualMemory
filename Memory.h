#ifndef MEMORY_H
#define MEMORY_H
#include "PageTableEntry.h"

class Memory {
	private:
		PageTableEntry *frames[30];
	public:
		inline Memory();
		void setFrame(int frame, PageTableEntry *pte);
		PageTableEntry *getFrame(int frame);
		int getFreePage();
		int findSwapPage();
		int convert(int frame);
};
#endif