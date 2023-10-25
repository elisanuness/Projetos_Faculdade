//Última ocorrência de vogal - Com base no algoritmo anterior, utilizando apenas ponteiros, escreva um algoritmo que percorra uma string, e retorne ao usuário o endereço de memória da última ocorrência de uma vogal. Caso a vogal não for encontrada, retorne NULL.

#include <stdio.h>

//Identificando a última vogal da string.
int main() {
  char string[] = "Hello World";
  char *p = string;

//Atribuição de erro para casos onde não há nenhuma vogal na string.  
  char *endVogal = NULL;

//Identificando as vogais da string em um laço.
  while (*p != '\0') {
    switch (*p){
      case 'a' : case 'A' : 
      case 'e' : case 'E' :
      case 'i' : case 'I' :
      case 'o' : case 'O' :
      case 'u' : case 'U' : 
      endVogal = p;
    }
    p++;
   }

//Quando a palavra possui vogal(is):
if (endVogal != NULL){
  printf("A posição da última vogal é: %p, (%c)\n", endVogal, *endVogal);
}

//Quando a palavra não possui vogal:
else printf ("Nenhuma vogal encontrada!!");

   return 0;
}
