#include <stdlib.h>

#include "list_pointer.h"

void init_list_pointer(pointer_list_t *list) {
  list->size = 0;
  list->end = NULL;
}


void add_value_list_pointer(pointer_list_t *list, int value) {
  pointer_node_t *new_node = (pointer_node_t *) malloc(sizeof(pointer_node_t));
  if (new_node == NULL) {
    abort();
  }
  new_node->value = value;
  new_node->next = NULL;
  list->end->next = new_node;
  list->end = new_node;
  list->size += 1;
}
