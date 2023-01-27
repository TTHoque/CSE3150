// constness--> makes an entity immutable  
// annotation added on declarations of variables, of function's objects, etc.

#include <iostream>
using namespace std;

void printGreeting(string name) {
    const string msg = "Hello " + name + "!";
    const int len = msg.size();
    const string stars(len+4 , '*');
    const string edge = "*" + string(len+2, ' ') + "*";
    const string middle = "* " + msg + " *";
    cout << stars << endl
         << edge << endl
         << middle << endl
         << edge << endl
         << stars << endl;
}

int main()
{
    cout << "Please enter your first name: ";

    string name; 
    cin >> name; 

    printGreeting(name);

    return 0;
}