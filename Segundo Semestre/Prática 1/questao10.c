//Escreva um algoritmo em C, utilizando apenas ponteiros, que insere a string de origem à string de destino.

#include "stdio.h"

  //Concatenando uma string ao final de outra
  int main(void) {
  char destino[100] = "Autônoma";
  char origem[100] = "Universidade";

  // Inclua a lógica abaixo da concatenação da origem no início de destino
  char *p1 = destino;
  char *p2 = origem;

  for (int i = 9; i >= 0; i--) {
    *(p1+i+12) = *(p1+i);
  }

  for (int i = 0; i < 12; i++) {
    *(p1+i) = *(p2+i);
  }

// Resultado
	printf("%s\n", destino); 


  return 0;
}

