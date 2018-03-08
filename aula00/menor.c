#include <stdio.h>


int menor_valor(int n, int *vetor) {
  int menor = vetor[0];
  for (int i = 1; i < n; i++)
    if (vetor[i] < menor)
      menor = vetor[i];
  return menor;
}

int main(void) {
  int vetor[4];
  vetor[0] = 9;
  vetor[1] = 7;
  vetor[2] = 0;
  vetor[3] = 1;
  int ret = menor_valor(4, &vetor[0]);
  printf("o menor valor foi %d\n", ret);
}
