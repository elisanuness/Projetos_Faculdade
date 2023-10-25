//Escreva um algoritmo em C, utilizando apenas ponteiros, que copie o conteúdo de uma string de origem para a string de destino.

#include "stdio.h"

//Copiando strings
  int main(void) {
  char origem[20] = "";
  char destino[20] = "";

//Inserindo a string de origem
  printf("insira uma string origem: ");
  scanf("%s", origem);

  char *p1 = origem;
  char *p2 = destino;

//Copiando a string de origem na string de destino
  while(*p1!='\0'){
    *p2 = *p1;
    p1++;
    p2++;
  }

//Imprimindo a string original e a copiada
  printf("Palavra inserida: %s\n", origem);
  printf("Palavra copiada: %s", destino);

  return 0;
}
