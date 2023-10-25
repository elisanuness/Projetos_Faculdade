/*Escreva as seguintes funções:
    1. escreva uma função que retorne o endereço de memória do maior elemento do vetor.
    2. escreva uma função que retorne o endereço de memória do menor elemento do vetor.*/

#include <stdio.h> 

int maior (int *ptr_vetor , int numero){
  int maior_valor;
  for(int i=0; i<numero; i++){
    if(*ptr_vetor<*(ptr_vetor+1)){
      maior_valor = *(ptr_vetor+1);
    } else maior_valor= *ptr_vetor;
  }
  return maior_valor;
}

int menor (int *ptr_vetor , int numero){
  int maior_valor;
  for(int i=0; i<numero; i++){
    if(*ptr_vetor>*(ptr_vetor+1)){
      maior_valor = *(ptr_vetor+1);
    } else maior_valor= *ptr_vetor;
  }
  return maior_valor;
}

int main() {
  int numero;
  printf("Quantos valores terão no array? ");
  scanf("%d", &numero);  
    
  int vetor[numero];
  int *ptr_vetor = vetor;
  for(int i=0; i<numero; i++){
    printf("Insira o %d° valor: ", i+1);
    scanf("%d", &vetor[i]);
  }

  int maior_numero = maior(ptr_vetor, numero);
  int menor_numero = menor(ptr_vetor, numero);
  
  printf("O maior valor é %d e o endereço é %d\n", maior_numero, &maior_numero);
  printf("O menor valor é %d e o endereço é %d", menor_numero, &menor_numero);
  
  return 0;
}