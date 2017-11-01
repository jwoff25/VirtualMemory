#ifndef PARSER_H
#define PARSER_H
#include <string>

using namespace std;

class Parser {
    public:
        void access_memory(string);
        void new_process(string);
        void switch_process(string);
};

#endif