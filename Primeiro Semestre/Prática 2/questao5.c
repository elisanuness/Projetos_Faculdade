//Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    float altura = 0.0f;
    printf("Entre com o valor da sua altura: ");
    scanf("%f", &altura);

    float peso = 0.0f;
    printf("Entre com o valor da sua peso: ");
    scanf("%f", &peso);

    //Cálculo e Saída
    float imc = peso/(pow(altura,2));
    printf("O valor do índice de massa corporal é de %.2f\n ", imc);

    return 0;
}