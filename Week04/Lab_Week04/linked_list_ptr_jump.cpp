#include "linked_list_ptr_jump.h"
#include <iostream>

using namespace std;

struct node * linked_list_init(const int n) 
{
    struct node * LL = new node;
    struct node * cur = LL;
    for (int i=0; i<n; i++) {
        cur->num = i;
        cur->next = new node;
        cur->jumper = cur->next;
        cur = cur->next;
    }

    return LL;
}

int deleteLL(struct node * root, const int n) 
{

}

struct node * ptr_jump(struct node * root, const int n) 
{

}

struct node * array_ptrs_to_each_element_in_LL(struct node * list, const int elements) 
{   
    int k = 0;
    struct node * array_of_elements_LL = new node[elements];
    struct node * root = array_of_elements_LL;

    for (int i=0; i<elements; i++) {
        array_of_elements_LL[i].num = list->num;
        array_of_elements_LL[i].jumper = list->jumper;
        array_of_elements_LL[i].next = list->next;

    }

    return array_of_elements_LL;
}

int print_jumper_next_node(struct node * array_ptrs, const int elements) 
{
    int sum = 0;
    struct node * cur = array_ptrs;
    for (int i=0; i<elements; i++) {
        struct node * ptr = array_ptrs[i].jumper;
        int number = ptr->num;
        sum += number;
        cout << number << endl;
    }
    return
}

int advance_jumpers_by_1(struct node * array_ptrs, const int elements) 
{
    int sum = 0;
    cout << "advance_jumpers_by_1 start" << endl;
    for (int i=0; i<elements; i++) {
        array_ptrs[i].jumper = array_ptrs[i].jumper->jumper;
        int number = array_ptrs[i].num;
        sum += number;
        cout << number << << " ";       
    }
    cout << endl << "advance_jumpers_by_1 end" << endl;
}

int advance_jumpers_by_double(struct node * array_ptrs, const int elements) 
{
    int sum = 0;
    cout << "advance_jumpers_by_double start" << endl;
    for (int i=0; i<elements; i++) {
        array_ptrs[i].jumper = array_ptrs[i].jumper->jumper;
        int number = array_ptrs[i].num;
        sum += number;
        cout << number << << " ";       
    }
    cout << endl << "advance_jumpers_by_double end" << endl;
}