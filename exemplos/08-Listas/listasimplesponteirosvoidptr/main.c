#include <stdio.h>
#include <stdlib.h>
#include "pointerlist.h"

int main(void) {
  pointer_list_t *list = create_list();
  int toAdd[25]; //Usei um vetor para ter uma posição diferente de memória por i
  for (int i = 0; i < 25; i++) {
    toAdd[i] = i;
    add_element(list, &toAdd[i]);
  }

  //Imprime lista. Observe o cast!
  node_t *toVisit = list->first;
  while (toVisit != NULL) {
    printf("%d ", *((int *) toVisit->info));
    toVisit = toVisit->next;
  }
  printf("\n");

  remove_element(list, 20);

  //Imprime lista. Observe o cast!
  toVisit = list->first;
  while (toVisit != NULL) {
    printf("%d ", *((int *) toVisit->info));
    toVisit = toVisit->next;
  }
  printf("\n");
  destroy_list(list);
  return 0;
}
