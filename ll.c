#include <ll.h>
#include <stdio.h>
#include <stdlib.h>

void print_addrs(struct list_int *head) {
    printf("%p: head\n", head);
    printf("%p: head->list->next\n", &((head->list).next));
    printf("%p: head->list->prev\n", &((head->list).prev));
    printf("%p: head->value\n", &(head->value));
}

struct list_int * new_list_int(int value) {
    struct list_int *p = (struct list_int *) malloc(sizeof(struct list_int));
    p->value = value;
    return p;
}