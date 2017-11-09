#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include "ProcessTable.h"
#include "PageTable.h"
#include "Memory.h"
#include "PageTableEntry.h"
#include "Disk.h"

using namespace std;

void new_process(int n);
void switch_process(int n);
void access_memory(int memory_address);

PageTable* current_page_table;
//PageTable page_table;
ProcessTable process_table;

int main(){
    //string to store lines
    string line;
    //open file
    ifstream file ("VMInput.txt");
    //loop thru
    if (file.is_open()){ //check if file is open
        while (getline(file,line)){ //while there is a next line
            //splitting the string into two strings
            //command = new, switch, access
            //value = PID or memory location
            istringstream stream(line);
            string command;
            string val;
            getline(stream,command,' ');
            getline(stream,val,' ');
            int value = atoi(val.c_str());
            //if command is new
            if (command == "new"){
                new_process(value);
            }
            else if (command == "switch"){
                switch_process(value);
            }
            else {
                access_memory(value);
            }
        }
    }
}

void new_process(int n){
    //cout << "Creating new process with PID: " << s << endl;
	PageTable* p = new PageTable();
	process_table.setProcPT(n, p);
}

void switch_process(int n){
    //cout << "Switching to process with PID: " << s << endl;   
	current_page_table = process_table.getProcPT(n);
}

void access_memory(int memory_address){
    //cout << "Accessing memory location: " << s  << endl;   
    int page = memory_address >> 10;
    PageTableEntry* frame = current_page_table->getPTE(page);
    frame->isInMemory();
}
