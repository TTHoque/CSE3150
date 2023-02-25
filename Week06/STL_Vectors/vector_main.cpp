#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "vector.h"
using namespace std;

int main() 
{
    ifstream in_file;
    in_file.open("vectors_1.txt");

    vector<int_vector> vect;

    int id{0};
    string from, to;
    while (in_file >> from >> to) {
        cout << from << " " << to << " " << endl;
        int_vector int_v;
        int_v.from = atoi(from.c_str());
        int_v.to = atoi(to.c_str());
        int_v.id = id++;
        vect.push_back(int_v);
    }
    cout << endl;
    cout << "---------------------------" << endl;

    for (auto v: vect) {
        cout << v.id << ": " << v.from << " to " << v.to << endl;
    }

    sort(vect.begin())
}   