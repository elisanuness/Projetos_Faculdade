//Concatenação de string - Implemente em linguagem C a concatenação da string world à string hello utilizando apenas ponteiros.

#include "stdio.h"

//Concatenação de duas strings
int main(void) {
  char hello[11]= "Hello";
  char world[] = "World";
  char *p2 = world;
  char *p1 = hello+5;

//Concatenando duas strings
  while (*p2 != '\0'){
    *p1 = *p2;
    p1++;
    p2++;
  }

// Imprimindo a concatenação
  printf("A concatenação resultou em %s", hello);
  
  return 0;
}