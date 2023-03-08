#include <vector>
#include <iostream>
#include <list>
using namespace std;

template<typename C, typename P>
int count(const C& c, P pred)
{
    int cnt = 0;
    for (const auto& x: c) {
        if (pred(x)) ++cnt;
    }
    return cnt;
}
void f(const vector<int> & vec, const list<string> & Lst, int x, const string& s)
{
    cout << "number of values less than " << x
    << ": " << count(vec, [&](int a){return a<x;})
    << "\n";

    cout << "number of values less than " << s
    << ": " << count(Lst, [&](const string& a){return a<s;})
    << "\n";
}

int main()
{
    vector<int> vect = {1, 2, 3, 4, 5, 6, 7, 8};
    for_each(vect.begin(), vect.end(), [](const int n) {std:: cout << n << " ";});

    list<int> list = {10, 8, 7, 6};

    return 0;
}