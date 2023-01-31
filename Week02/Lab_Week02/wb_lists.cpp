#include <iostream>
#include "wb_lists.h"
#include "prefix_sum.h"

using namespace std;

void fisher_yates_shuffle(int* array, int length)
{
    int k, temp;
    for (int i=length-1; i>=0; i--) {
        k = rand() % i;
        cout << "k: " << k << endl;
        temp = array[k];
        array[k] = array[i];
        array[i] = temp;
    }
}

int* generator(int n)
{
    int * array = new int[10];
    for (int i=0; i<n; i++) {
        array[i] = 1;
    }
    for (int j=n; j<2*n; j++) {
        array[j] = -1;
    }

    do {
        fisher_yates_shuffle(array, 2*n);
    } while (non_negative_sum(array, 2*n) || non_positive_sum(array, 2*n));

    return array;
}

int main() 
{
    int * array;
    array = generator(5);

    for (int i=0; i<10; i++){
        cout << array[i] << endl;
    }
    
    delete[] array;
    return 0;
}