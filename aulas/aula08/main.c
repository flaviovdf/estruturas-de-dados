#include <stdio.h>
#include "pointerlist.h"

int main(void) {
  pointer_list_t *list = create_list();
  add_element(list, 7);
  print_list(list);

  add_element(list, 82);
  print_list(list);

  add_element(list, 5);
  print_list(list);

  add_at(list, 6, 2);
  print_list(list);

  add_at(list, 6, 5);
  print_list(list);

  return 0;
}
