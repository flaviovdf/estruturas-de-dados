#include <stdio.h>
#include "arraylist.h"

int main(void) {
  array_list_t *array_list = create_list();
  for (int i = 0; i < 1000; i++)
    add_element(array_list, i);
  destroy_list(array_list);
  return 0;
}
