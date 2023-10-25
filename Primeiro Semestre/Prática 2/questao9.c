// Faça um programa em C que leia um número inteiro e imprima o caractere correspondente na tabela ASCII.

#include <stdio.h>

int main() {

    //Entrada de Valores
    int inteiro = 0;
    printf("Insira um número inteiro: ");
    scanf("%i", &inteiro);

    //Cálculo e Saída
    char caractere = inteiro;
    printf("O valor em ASCII é %c\n", caractere);

    return 0;
}