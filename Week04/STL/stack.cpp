#include "stack.h"
#include <fstream>
#include <iostream>
#include <exception>

using namespace std;

stack<int> get_int_stack(const int n)
{   
    stack<int> s;
    for (int i=0; i<n; i++) {
        s.push(i);
    }
    return s;
}

stack<int> int_stack_from_file(string file) 
{   
    ifstream input {file};
    stack<int> stack;

    if (input) {
        string buffer;
        int x;
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

struct node * double_linked_list(const int n)
{   
    if (n<=0) return NULL;
    struct node * start = new node;
    struct node * last = start;
    struct node * cur = start;
    int i;
    for (i=0; i<n-1; i++) {
        cur->value = i;
        cur->prev = last;
        cur->next = new node;
        last = cur;
        cur = cur->next;
    }
    cur->value = i;
    last = cur;
    cur->next = cur;
    cur->prev = last;

    return start;
}

stack<struct node> get_node_stack(const int n)
{
    stack<struct node> stack;
    struct node * cur = double_linked_list(n);

    for (int i=0; i<n; i++) {
        stack.push(*cur);
        cur = cur->next;
    }
    return stack;
}

stack<struct node> node_stack_from_file(string file)
{
    ifstream input {file};
    stack<struct node> stack;

    if (input) {
        string buffer;
        int x;
        struct node * cur = new node;
        struct node * last = cur; 
        int count = 0;

        while (!input.eof()) {
            input >> buffer;
            try
            {   
                x = stoi(buffer);
                cur->value = x;
                cur->prev = last;
                cur->next = new node;
                last = cur;
                stack.push(*last);
                cur = cur->next;
                count++;

            }
            catch(const std::exception& e)
            {
                std::cerr << "buffer doesn't hold integer: " << buffer << " " << '\n';
            }   
        }

    if (count == 0) delete cur;
    else {
        cur = last;
        cur->next = cur;
    }

    }
    return stack;
}

int pop_and_print_nodes(stack<struct node> stack) 
{
    int sum = 0;
    cout << "printing stack of nodes: ";
    if (stack.empty()) {
        cout << endl;
        return sum;
    }

    struct node * cur = stack.top().next;
    cout << stack.top().value << " ";
    delete cur;
    stack.pop();
    while (stack.size()>1) {
        cout << stack.top().value << " ";
        stack.pop();
        cur = stack.top().next;
        delete cur;
    }
    cout << stack.top().value << " ";
    cout << endl;
    cur = stack.top().prev;
    delete cur;
    return sum;
}