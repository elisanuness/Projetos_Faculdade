//Imprima apenas um byte de um inteiro a sua escolha.

#include <stdio.h>

int main() {
  
  //Entrada de Valores
  int n = 1025;
  int *pn = &n;
  char *pchar = (char *)&n;

  // Imprimindo pulando as 4 casas certinho do inteiro
  printf("pn (&n): %u\n", pn);
  printf("pn+1 (&n): %u\n", pn+1);
  
  //Imprimindo pulando apenas uma casa do char
  printf("pchar (&n): %u\n", pchar);
  printf("pchar+1 (&n): %u\n", pchar+1);

  // Imprimindo valores!
  // Imprimindo o primeiro byte do inteiro
  printf("Byte 1 - *pchar: %d\n", *pchar);
  //Imprimindo o segundo byte do inteiro
  printf("Byte 1 - *pchar+1: %d\n", *(pchar+1));

  return 0;
}