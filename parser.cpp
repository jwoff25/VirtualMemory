#include <string>
#include <iostream> 
#include "parser.h"
#include "ProcessTable.h"
#include "PageTable.h"
#include "Memory.h"
#include "PageTableEntry.h"
#include "Disk.h"

using namespace std;

PageTable* current_page_table;
PageTable page_table;
ProcessTable process_table;

void Parser::new_process(int n){
    //cout << "Creating new process with PID: " << s << endl;
	PageTable p = new PageTable();
	p.setPTE(n);
}

void Parser::switch_process(int n){
    //cout << "Switching to process with PID: " << s << endl;   
	current_page_table = page_table.getPTE(n);
}

void Parser::access_memory(int memory_address){
    cout << "Accessing memory location: " << s  << endl;   
}