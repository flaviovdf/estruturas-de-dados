#ifndef POINTER_LIST_H
#define POINTER_LIST_H

typedef struct node {
  void *info;
  struct node *next;
} node_t;

typedef struct {
  node_t *first;
  node_t *last;
} pointer_list_t;

pointer_list_t *create_list();
void add_element(pointer_list_t *list, void *element);
void destroy_list(pointer_list_t *list);
void remove_element(pointer_list_t *list, int i);
#endif
