#include <stdio.h>

void bm(int x) {
  if (x == 0)
    return;
  printf("%d\n", x);
  bm(x / 10);
  printf("%d\n", x);
}

int main(void) {
  bm(98278);
  return 0;
}
