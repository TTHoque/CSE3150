#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "linked_lists.h"

struct node * linked_list_1 = build_linked_list(1);

const int TEST_DELETE = 10;
struct node * linked_list_2  = build_linked_list(TEST_DELETE);

const int TEST_DELETE_a= 2;
struct node * linked_list_2a  = build_linked_list(TEST_DELETE_a);

const int TEST_SMALL = 3;
struct node * linked_list_3 = build_linked_list(TEST_SMALL);

TEST_CASE("Testing build linked lists") 
{
    
}