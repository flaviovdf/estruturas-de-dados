#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "arraylist.h"

array_list_t *create_list() {
  int *data = (int *) malloc(INIT_SIZE * sizeof(int));
  if (data == NULL) {
    printf("Error, sem memória!!");
    exit(1);
  }
  array_list_t *list = (array_list_t *) malloc(sizeof(array_list_t));
  if (list == NULL) {
    printf("Error, sem memória!!");
    exit(1);
  }
  list->data = data;
  list->n_elements = 0;
  list->capacity = INIT_SIZE;
  return list;
}

void add_element(array_list_t *list, int element) {
  if (list->n_elements == list->capacity) {
    //Duplica tamanho da lista
    int *new_data = (int *) malloc(list->n_elements * 2 * sizeof(int));
    if (new_data == NULL) abort();

    /*
     * Outra forma de fazer, melhor! Fiz com for para o exemplo.
     * memcpy(new_data, list->data, list->nElements * sizeof(int));
     */
    for (int i = 0; i < list->n_elements; i++)
      new_data[i] = list->data[i];

    free(list->data);
    list->data = new_data;
    list->capacity = list->n_elements * 2;
  }
  list->data[list->n_elements] = element;
  list->n_elements++;
}

void destroy_list(array_list_t *list) {
  free(list->data);
  free(list);
}

void print_list(array_list_t *list) {
  int i;
  for(i = 0; i < list->n_elements; i++)
    printf("%d ", list->data[i]);
  printf("\n");
}

void remove_last_element(array_list_t *list) {
  list->n_elements--;
}
