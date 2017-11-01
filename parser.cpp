#include <string>
#include <iostream> 
#include "parser.h"

using namespace std;

void Parser::new_process(string s){
    cout << "Creating new process with PID: " << s << endl;
}

void Parser::switch_process(string s){
    cout << "Switching to process with PID: " << s << endl;    
}

void Parser::access_memory(string s){
    cout << "Accessing memory location: " << s  << endl;    
}