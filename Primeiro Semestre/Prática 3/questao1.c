//Faça um programa em C que determine se um número inteiro lido é par ou ímpar.

#include <stdio.h>

int main() {

    //Entrada de Valores
    int numero = 0;
    printf ("Insira o valor do numero inteiro: ");
    scanf("%d", &numero);

    //Cálculo
    int divisivel_por_2 = numero % 2 == 0;  

    //Saída de Valores
    if(divisivel_por_2){
    printf("O número %d é par!!\n", numero);
    } else if (!divisivel_por_2) {
    printf("O número %d é impar!!\n", numero);
    }
    return 0;
}