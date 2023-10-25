//Escreva uma função que receba um array de inteiros e calcule a média dos valores armazenados no array. A média deve ser retornada pela função e o array não deve ser modificado.

#include <stdio.h> 

int calcularMedia (int n, int vet[n]){
  int *ptr_vetor;
  ptr_vetor = vet;
  
  int soma =0;
  int maior_3 = 0;

  for(int i=0; i<n; i++){
  if(*(ptr_vetor+i)>3){
    soma = soma + *(ptr_vetor+i);
    maior_3 = maior_3 +1;
  }
  }

  int media = soma/maior_3;
  return media;
}

int main() {
  int n;
  printf("Quantos valores serão inseridos? ");
  scanf("%d", &n);
  int vetor[n];

  for (int i=0; i<n; i++){
  printf("Insira o valor do %d° valor: ", i+1);
  scanf("%d", &vetor[i]);
  }

  int media = calcularMedia (n, vetor);
  printf("O valor da média é %d", media);
  return 0;
}