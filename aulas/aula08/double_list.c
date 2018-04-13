#include <stdlib.h>

#include "double_list.h"

double_list_t *create_list() {
  double_list_t *l = (double_list_t *) \
      malloc(sizeof(double_list_t));
  l->first = NULL;
  l->last = NULL;
  l->size = 0;
  return l;
}

void add_first(double_list_t *list, int element) {
  node_t *n = (node_t *) malloc(sizeof(node_t));
  n->info = element;
  n->prev = NULL;
  n->next = list->first;
  if (list->first == NULL) {
    list->last = n;
  } else {
    list->first->prev = n;
  }
  list->first = n;
  list->size++;
}
void add_at(double_list_t *list, int element, int pos) {

}
