// Escreva uma função que receba um array de inteiros e um valor inteiro, e modifique o array adicionando o valor passado como parâmetro a cada elemento do array.

#include <stdio.h>

void trocadeValores (int *ptr_array, int inteiro, int numero){
  for(int i=0; i<numero; i++){
    *(ptr_array+i)=inteiro;
  }
}

int main (){
  int numero;
  printf("Quantos valores terão no array? ");
  scanf("%d", &numero);  
  
  int array[numero];
  int inteiro;
  int *ptr_array = array;

  for(int i=0; i<numero; i++){
    printf("Insira o %d° valor: ", i+1);
    scanf("%d", &array[i]);
  }

  printf("Insira um valor inteiro: ");
  scanf("%d", &inteiro);
  
  trocadeValores(ptr_array, inteiro, numero);

  for(int j=0; j<numero; j++){
    printf("%d", *(ptr_array+j));
  }

  return 0;
}