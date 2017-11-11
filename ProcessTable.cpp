#include "ProcessTable.h"
#include <iostream>

using namespace std;

ProcessTable::ProcessTable(){

}

void ProcessTable::setProcPT(int pid, PageTable *pt){
	procPageTable[pid] = pt;
}

PageTable* ProcessTable::getProcPT(int pid){
	return procPageTable[pid];
}