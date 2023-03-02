#include <algorithm>

using namespace std;

void divides_by_sum(const vector<int> & vect, int & d, int & sum)
{
    for_each(vect.begin(), vect.end(), [&d](int elt) mutable) {
        if (elt % d == 0) cout << elt << " ";
        d = 1;
    }
    cout << endl;
}