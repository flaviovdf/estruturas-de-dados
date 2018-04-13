#ifndef POINTER_LIST_H
#define POINTER_LIST_H

typedef struct node {
  int info;
  struct node *next;
} node_t;

typedef struct {
  node_t *first;
  node_t *last;
  int size;
} pointer_list_t;

pointer_list_t *create_list();
void add_element(pointer_list_t *list, int element);
void add_at(pointer_list_t *list, int element, int i);
void destroy_list(pointer_list_t *list);
void print_list(pointer_list_t *list);
void remove_element(pointer_list_t *list, int i);
#endif
