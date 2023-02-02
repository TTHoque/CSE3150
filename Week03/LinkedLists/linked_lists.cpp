#include "linked_lists.h"

struct node * build_linked_list(int elements) // elements = # of elements = # of nodes in LL
{
    struct node * start = new node;
    struct node * list_ptr = start;

    for (int i=0; i < elements; i++) {
        list_ptr->next = new node;
        list_ptr->number = i;
        list_ptr = list_ptr->next;
    }

    list_ptr->next = list_ptr;
    return start;   
}
/* fix bug: return null for list of 0 elements*/

int delete_linked_list(struct node * list, int elements)
{
    int count = 0;
    struct node * my_node = list;

    for (int i=0; i<elements; i++) {
        struct node * prev_node = my_node;
        my_node = my_node->next;

    }
}

/*
void print_linked_list(struct node * list, int elements);

int sum_values_in_linked_list(struct node * list, int elements);
*/