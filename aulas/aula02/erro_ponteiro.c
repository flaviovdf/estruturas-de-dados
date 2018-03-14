#include <stdio.h>

int qqcoisa1() {
  int x = 7;
  return x;
}

int *qqcoisa2() {
  int x = 14;
  int *y = &x;
  return y;
}

int main(void) {
  int retorno_qqcoisa1 = qqcoisa1();
  int *retorno_qqcoisa2 = qqcoisa2();
  return 0;
}
