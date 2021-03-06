#ifndef PAGETABLEENTRY_H
#define PAGETABLEENTRY_H

class PageTableEntry{
	private:
		bool inMemory;
		int frame;
	public:
		PageTableEntry();
		int getFrame();
		void setFrame(int f);
		bool isInMemory();
		void swapToDisk(int diskFrame);
		void swapToMemory(int memFrame);
		void memFalse();
		void memTrue();
};
#endif