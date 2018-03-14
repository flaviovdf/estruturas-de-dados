#include <stdio.h>

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

  int matriz[n_linhas][n_colunas];
  for (int i = 0; i < n_linhas; i++) {
    for (int j = 0; j < n_colunas; j++) {
      fscanf(matrix_file, "%d", &matriz[i][j]);
    }
  }

  for (int i = 0; i < n_linhas; i++) {
    for (int j = 0; j < n_colunas; j++) {
      printf("%d ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}
