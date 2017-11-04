#ifndef DISK_H
#define DISK_H
#include <vector>
#include "PageTableEntry.h"

class Disk {
	private:
		std::vector<PageTableEntry*> frames;
	public: 
		inline Disk();
		void addFrame(PageTableEntry* pte);
		void removeFrame(int pteLocation);
};
#endif