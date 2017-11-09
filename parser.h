#ifndef PARSER_H
#define PARSER_H
#include <string>

using namespace std;

class Parser {
    public:
        void access_memory(int);
        void new_process(int);
        void switch_process(int);
};

#endif