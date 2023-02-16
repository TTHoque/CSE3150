#include "stack.h"
#include <fstream>
#include <iostream>
#include <exception>

using namespace std;

int pop_and_print_stack(stack<int> stack) 
{
    int sum = 0;
    cout << "printing stack: ";
    while (!stack.empty()) {
        sum += stack.top();
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;
    return sum;
}

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
    stack<int> stack;
    string buffer;
    int x;
    if (input) {
        while (!input.eof()) {
            input >> buffer;
            try
            {
                x = stoi(buffer);
                stack.push(x);
            }
            catch(const std::exception& e)
            {
                std::cerr << "buffer doesn't hold integer: " << buffer << " " << '\n';
            }   
        }
    }
    return stack;
}