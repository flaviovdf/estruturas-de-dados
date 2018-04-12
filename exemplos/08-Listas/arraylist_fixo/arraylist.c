#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "arraylist.h"

array_list_t *create_list() {
  int *data = (int *) malloc(MAX_SIZE * sizeof(int));
  if (data == NULL) {
    printf("Erro, sem memória!!");
    exit(1);
  }
  array_list_t *list = (array_list_t *) malloc(sizeof(array_list_t));
  if (list == NULL) {
    printf("Erro, sem memória!!");
    exit(1);
  }
  list->data = data;
  list->n_elements = 0;
  return list;
}

void add_element(array_list_t *list, int element) {
  if (list->n_elements == MAX_SIZE) {
    free(list->data);
    free(list);
    printf("Erro, sem memória!!");
    exit(1);
  }
  list->data[list->n_elements] = element;
  list->n_elements++;
}

void destroy_list(array_list_t *list) {
  free(list->data);
  free(list);
}

void imprime_lista(array_list_t *list) {
  int i;
  for(i = 0; i < list->n_elements; i++)
    printf("%d ", list->data[i]);
  printf("\n");
}

void remove_element(array_list_t *list) {
  list->n_elements--;
}
