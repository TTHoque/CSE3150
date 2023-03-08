#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

template<typename T, typename InputIterator, typename F>
void merge_sort_aux(std:: vector<T> & v, InputIterator from, InputIterator to, const F & cmp)
{
    // [from, to)

    if (next(from) == to) return;
    else {
        auto d = from + (to-from)/2;
        merge_sort_aux(v, from , d, cmp);
        merge_sort_aux(v, d, to, cmp);
        std:: vector<T> a(from, d), b(d, to);

        auto i = a.begin(), j = b.begin(), k = from;
        while (i != a.end() && j != b.end()) {
            if (cmp(*i, *j))
                *k++ = *i++;
            else 
                *k++ = *j++;
        }
        while (i != )
    }
}