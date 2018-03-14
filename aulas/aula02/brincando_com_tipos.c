#include <stdio.h>
#include <stdlib.h>

// int *cria_vetor_errada(int n) {
//   int vetor[n];
//   for (int i = 0; i < n; i++)
//     vetor[i] = i * 2;
//   return &vetor[0];
// }

int *cria_vetor_corretamente(int n) {
  double *vetor = (double *) malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
    vetor[i] = i * 2;
  return (int *) vetor;
}

int main(void) {
  int *vetor = cria_vetor_corretamente(10);
  for (int i = 0; i < 10; i++) {
    printf("%d\n", vetor[i]);
  }
  return 0;
}
