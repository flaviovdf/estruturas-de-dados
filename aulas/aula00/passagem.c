#include <stdio.h>


// 7 2
// 9
void acumulador(int *x, int y) {
  printf("dentro da func %p\n", x);
  *x = *x + y;
  printf("depois da func %d\n", *x);
}

int main(void) {
  int x = 7;
  int y = 2;
  printf("deveria ser 7 %d\n", x);
  acumulador(&x, y);
  printf("deveria ser 9 %d\n", x);
  return 0;
}
