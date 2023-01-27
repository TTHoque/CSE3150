#include <iostream>
using namespace std;

// right now, all the variables are stored on the stack

void printGreeting(string name) {
    string msg = "Hello " + name + "!";
    int len = msg.size();
    string stars(len+4 , '*');
    string edge = "*" + string(len+2, ' ') + "*";
    string middle = "* " + msg + " *";
    cout << stars << endl
         << edge << endl
         << middle << endl
         << edge << endl
         << stars << endl;
}

int main()
{
    cout << "Please enter your first name: ";

    string name; // object called string is allocated on the stack, the string called name is constructed
    cin >> name; // getting value from stdin

    printGreeting(name);

    return 0;
}

/*
Memory Pools
-Global
-Stack
-Heap 


*/