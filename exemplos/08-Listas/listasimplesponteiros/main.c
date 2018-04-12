#include <stdio.h>
#include "pointerlist.h"

int main(void) {
  int i;
  pointer_list_t *list = create_list();
  for (i = 0; i < 25; i++)
    add_element(list, i);
  print_list(list);
  remove_element(list, 20);
  print_list(list);
  remove_element(list, 0);
  print_list(list);
  remove_element(list, 99);
  print_list(list);
  remove_element(list, 22);
  print_list(list);
  for (i = 0; i < 25; i++) {
    remove_element(list, 0);
    print_list(list);
  }
  destroy_list(list);
  return 0;
}
