#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#define MAX_SIZE 30

typedef struct {
  int n_elements;
  int capacity;
  int *data;
} array_list_t;

array_list_t *create_list();
void add_element(array_list_t *list, int element);
void destroy_list(array_list_t *list);
void print_list(array_list_t *list);
#endif
