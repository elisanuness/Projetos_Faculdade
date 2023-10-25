//É possível identificar o tamanho da string sem a utilização de um contador (count). Reescreva o algoritmo, permitindo que o cumprimento da string seja encontrado utilizando apenas aritmética de ponteiros.

#include <stdio.h>

//Contando caracteres da string apenas com ponteiro
int main() {
   char string[] = "Hello World";
   char *p = string;

//Percorrendo todos os caracteres da string.
   while (*p != '\0') {
      p++;
   }  

//Subtraindo o endereço final pelo inicial para descobrir o comprimento. 
   printf("O número de caracteres na string é: %li\n", p-string);
   return 0;
}