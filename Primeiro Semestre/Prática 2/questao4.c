//Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h>
#include <math.h>

int main (){

    //Entrada de Valores
    float comprimento = 0.0f;
    printf("Entre com o comprimento do terreno: ");
    scanf("%f", &comprimento);

    float largura = 0.0f;
    printf("Entre com o largura do terreno: ");
    scanf("%f", &largura);

    //Cálculo e Saída
    float area = largura*comprimento;
    float hectare = area/10000;
    printf("A área do terreno é de %.3f hectares\n", hectare);

    return 0;
}