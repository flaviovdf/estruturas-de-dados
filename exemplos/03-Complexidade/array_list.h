#ifndef ARRAYLIST_H
#define ARRAYLIST_H

typedef struct {
  int size;
  int capacity;
  int *data;
} array_list_t;

void init_array_list(array_list_t *list);
void add_value_array_list(array_list_t *list, int value);

#endif
