//Preencha um vetor utilizando um procedimento void()

#include <stdio.h>

void preenche_vetor(int n, int *pvet) {
  for (int i; i < n; i++){
      printf("Insira um numero: ");
      scanf("%d", &pvet[i]);
  }
}

void exibir_vetor(int n, int m, int mat[n][m]) { 
    for (int i; i < n; i++){
      for (int j; j < m; j++){
      printf("vet[%d]: %d\n", i, mat[i][j]);
      }
  }
}

int main() {
    //Preenche matriz
    int mat[2][3] = {
    {1,2,3},
    {4,5,6},
    };

    exibir_vetor(2, 3, mat);

  return 0;
}