#ifndef PROCESSTABLE_H
#define PROCESSTABLE_H
#include "PageTable.h"

class ProcessTable {
	private:
		PageTable* procPageTable[32];
		int pointer;
	public:
		ProcessTable();
		void setProcPT(int pid, PageTable *pt);
		PageTable* getProcPT(int pid);
};
#endif
