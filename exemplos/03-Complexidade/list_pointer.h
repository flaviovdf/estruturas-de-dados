#ifndef LISTA_POINTER_H
#define LISTA_POINTER_H

typedef struct _pointer_node {
  int value;
  struct _pointer_node *next;
} pointer_node_t;

typedef struct {
  int size;
  pointer_node_t *end;
} pointer_list_t;

void init_list_pointer(pointer_list_t *list);
void add_value_list_pointer(pointer_list_t *list, int value);

#endif
