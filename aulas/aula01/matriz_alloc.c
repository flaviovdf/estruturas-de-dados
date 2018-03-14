#include <stdio.h>
#include <stdlib.h>

int norma(int m_linhas, int n_colunas, int **m) {
  return 0;
}

int main(void) {
  FILE *matrix_file = fopen("matriz.txt", "r");
  if (matrix_file == NULL) {
    printf("Nao consegui abrir o arquivo\n");
    return 1;
  }

  int n_linhas;
  int n_colunas;

  fscanf(matrix_file, "%d", &n_linhas);
  fscanf(matrix_file, "%d", &n_colunas);

  // aloca um vetor
  // (int *) malloc(10 * sizeof(int))

  int **matriz = (int **) malloc(n_linhas * sizeof(int *));
  for (int i = 0; i < n_linhas; i++) {
    matriz[i] = (int *)malloc(n_colunas * sizeof(int));
  }
  matriz[0][0] = 7;

  // for (int i = 0; i < n_linhas; i++) {
  //   for (int j = 0; j < n_colunas; j++) {
  //     fscanf(matrix_file, "%d", &matriz[i][j]);
  //   }
  // }
  //
  // for (int i = 0; i < n_linhas; i++) {
  //   for (int j = 0; j < n_colunas; j++) {
  //     printf("%d ", matriz[i][j]);
  //   }
  //   printf("\n");
  // }

  return 0;
}
