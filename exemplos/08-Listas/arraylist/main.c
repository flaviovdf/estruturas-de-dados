#include <stdio.h>
#include "arraylist.h"

int main(void) {
  array_list_t *array_list = create_list();
  for (int i = 0; i < 1000; i++)
    add_element(array_list, i);
  print_list(array_list);
  remove_last_element(array_list);
  print_list(array_list);
  destroy_list(array_list);
  return 0;
}
