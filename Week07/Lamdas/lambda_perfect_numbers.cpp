#include "lambda_perfect_numbers.h"
#include <algorithm>
#include <iostream>
#include <limits>
using namespace std;

bool perfect_number(const int& x)
{
    if (x <= 0) return false;
    vector<int> factors;
    vector<int> vect;
    int y = 1;
    while(y < x) vect.push_back(y++);

    int i=1;
    for_each(vect.begin(), vect.end(), [&factors, &x](int elt) {
        if (x % elt == 0) factors.push_back(elt);
    });

    int sum = 0;
    for_each(factors.begin(), factors.end(), [&sum](int i) {
        sum = sum + i;
    }); 
    
    return sum == x;
}

vector<int> perfect_numbers_generator(const int& from, const int& to)
{
    vector<int> vect;
    int i = from;
    while (i <= to) vect.push_back(i++);
    vector<int> numbers;
    for_each(vect.begin(), vect.end(), [&numbers](int n) {
        if (perfect_number(n)) {numbers.push_back(n);}
    });

    return numbers;
}