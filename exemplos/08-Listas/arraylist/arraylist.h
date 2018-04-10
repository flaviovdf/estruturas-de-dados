#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

#define INIT_SIZE 30

typedef struct {
  int *data; //data de dados em inglês
  int n_elements;
  int capacity;
} array_list_t;

array_list_t *create_list();
void add_element(array_list_t *list,
                 int element);
void destroy_list(array_list_t *list);
void print_list(array_list_t *list);
void remove_last_element(array_list_t *list);
#endif
