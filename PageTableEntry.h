#ifndef PAGETABLEENTRY_H
#define PAGETABLEENTRY_H

class PageTableEntry{
	private:
		bool inMemory;
		int frame;
	public:
		inline PageTableEntry();
		int getFrame();
		bool isInMemory();
		void swapToDisk(int diskFrame);
		void swapToMemory(int memFrame);
};
#endif