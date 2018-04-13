#ifndef DOUBLE_LIST_H
#define DOUBLE_LIST_H

typedef struct node {
  int info;
  struct node *next;
  struct node *prev;
} node_t;

typedef struct {
  node_t *first;
  node_t *last;
  int size;
} double_list_t;

double_list_t *create_list();
void add_first(double_list_t *list, int element);
void add_at(double_list_t *list, int element, int pos);
#endif
