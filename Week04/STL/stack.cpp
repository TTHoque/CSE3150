#include "stack.h"
#include <fstream>
#include <iostream>
#include <exception>

using namespace std;

stack<int> get_stack(const int n)
{   
    stack<int> s;
    for (int i=0; i<n; i++) {
        s.push(i);
    }
    return s;
}

stack<int> stack_from_file(string file) 
{   
    ifstream input {file};
    try
    {
        +
    }
    catch(const std::exception& e)
    {
        cerr << e.what() << '\n';
        return 
    }
     

    stack<int> stack;
    while (!input.eof()) {
        char c;
        input >> c;
        int x = atoi(&c);
        stack.push(x);
    }

    return stack;
}