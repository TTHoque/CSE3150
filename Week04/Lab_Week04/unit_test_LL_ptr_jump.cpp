#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "linked_list_ptr_jump.h"

const int length_0 = 0;
struct node * LL_0  = linked_list_init(length_0);

const int length_1 = 1;
struct node * LL_1 = linked_list_init(length_1);

const int length_2 = 2;
struct node * LL_2 = linked_list_init(length_2);

const int length_10 = 10;
struct node * LL_10 = linked_list_init(length_10);

struct node * array = array_ptrs_to_each_element_in_LL(LL_10, length_10);
print_jumper_next_node(array, 3);
EST_CASE {

}