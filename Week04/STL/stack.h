#ifndef __STACK_H
#define __STACK_H


#include <stack>
#include <string>
using namespace std;

stack<int> get_stack(const int n);
stack<int> stack_from_file(string file);

#endif