/*Similar às funções do item 24, ao invés de passar um ponteiro como parâmetro:
    1. Escreva uma função que receba um array de inteiros e um ponteiro para um inteiro, e modifique o ponteiro para que ele aponte para o maior valor do array.
    2. Escreva uma função que receba um array de inteiros e um ponteiro para um inteiro, e modifique o ponteiro para que ele aponte para o menor valor do array.*/

#include <stdio.h>

int maior (int vetor[] , int numero, int *ptr_vetor){
  ptr_vetor = vetor;
  for(int i=0; i<numero; i++){
    if(vetor[i]<vetor[i-1]){
      *ptr_vetor = vetor[i-1];
    } else {
      *ptr_vetor = vetor[i];
    }
  }
  return *ptr_vetor;
}

int menor (int vetor[] , int numero, int *ptr_vetor){
  ptr_vetor = vetor;
  for(int i=0; i<numero; i++){
    if(vetor[i]>vetor[i-1]){
      *ptr_vetor = vetor[i-1];
    } else {
      *ptr_vetor = vetor[i];
    }
  }
  return *ptr_vetor;
}

int main() {
  int numero;
  printf("Quantos valores terão no array? ");
  scanf("%d", &numero);  
    
  int vetor[numero];
  int *ptr_vetor_maior;
  int *ptr_vetor_menor;
 
  for(int i=0; i<numero; i++){
    printf("Insira o %d° valor: ", i+1);
    scanf("%d", &vetor[i]);
  }

  int maior_numero = maior(vetor, numero, ptr_vetor_maior);
  int menor_numero = menor(vetor, numero, ptr_vetor_menor);
  
  printf("O maior valor é %d\n", maior_numero);
  printf("O menor valor é %d", menor_numero);
  
  return 0;
}