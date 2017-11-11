#include "PageTable.h"
#include "PageTableEntry.h"

PageTable::PageTable(){

}

void PageTable::setPTE(int pt, PageTableEntry *ptr){
	entries[pt] = ptr;
}

PageTableEntry* PageTable::getPTE(int page){
	return entries[page];
}
