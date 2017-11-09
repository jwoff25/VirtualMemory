#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include "parser.h"

using namespace std;

int main(){
    //create parser
    Parser p;
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
                p.new_process(value);
            }
            else if (command == "switch"){
                p.switch_process(value);
            }
            else {
                p.access_memory(value);
            }
        }
    }
}
