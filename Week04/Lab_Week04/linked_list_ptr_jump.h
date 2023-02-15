#ifndef __LINKED_LIST_PTR_JUMP_H
#define __LINKED_LIST_PTR_JUMP_H

struct node {
    int num;
    struct node * next;
    struct node * jumper;
};

struct node * linked_list_init(const int n);
struct node * ptr_jump(struct node * root, const int n);

enum {
    NUMBER = 10
};

struct node * pointer_jum_linked_list(struct node * klist, const int elements);
int printLL(struct node * list, const int elements);
int deleteLL(struct node * list, const int elements);

int sum_values_in_LL(struct node * list, const int elements);
struct node * array_ptrs_to_each_element_in_LL(struct node * list, const int elements);

int print_jumper_next_node(struct node * array_ptrs, const in elements);

#endif