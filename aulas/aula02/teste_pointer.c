#include <stdio.h>

int main(void) {
  int *r = 0;
  printf("%p r aponta para\n", r);
  printf("%lu tamanho de um int\n", sizeof(int));
  r += 1;
  printf("%p r aponta para\n", r);
}
