//Faça um programa em C que leia um número inteiro e imprima a tabuada de multiplicação.

#include <stdio.h>

int main(){

    //Entrada de Valores
    int valor =0;
    printf("Insira um valor para fazer a tabuada: ");
    scanf("%d", &valor);

    //Cálculo e Saída
    for(int i=1; i<11; i++){
    printf("%i x %d = %i\n", valor, i, valor*i);
    }

    return 0;
}