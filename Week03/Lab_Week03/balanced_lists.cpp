#include "balanced_lists.h"
#include "prefix_sum.h"
#include <algorithm>

int neg_prefix_min(int array[], const int length) {
    int min_prefix(0), sum(0);

    for (int i=0; i<length; i++) {
        sum += array[i];
        min_prefix = min(min_prefix, sum);
    }

    return min_prefix;
}

int first_deepest_prefix_min(int array[], const int depth, const int length)
{
    int min_prefix(0), sum (0);

    int i; 
    for (i=0; i<length; i++) {
        sum += array[i];
        min_prefix = min(min_prefix, sum);
        if (depth==min_prefix) {
            break;
        }
    }
    return i;
}

int * shift_prefixes(int array[], const int length)
{
    int neg_prefix_value = neg_prefix_min(array, length);
    int first_index_of_deepest = first_deepest_prefix_min(array, neg_prefix_value, length);
    int * new_array = new int[length-1];
    int new_index = 0;

    for (int i=0; i<first_index_of_deepest; i++) {
        new_array[i+new_index] = array[i];
    }
    
    return new_array;
}