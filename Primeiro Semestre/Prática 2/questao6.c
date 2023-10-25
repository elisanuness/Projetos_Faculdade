//Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>
#include <math.h>

int main () {

    //Entrada de Valores
    float valor_de_compra = 0.0f;
    printf("Entre com o valor de compra inicial: ");
    scanf("%f", &valor_de_compra);

    int ano_fabricacao = 0;
    printf("Entre com o ano de fabricação: ");
    scanf("%i", &ano_fabricacao);

    int ano_depreciacao = 0;
    printf("Entre com o ano atual: ");
    scanf("%i", &ano_depreciacao);

    //Cálculo e Saídas
    float depreciacao = (ano_depreciacao - ano_fabricacao)*0.01*valor_de_compra;
    printf("O valor depreciado do veículo foi de %.2f\n", depreciacao);

    float valor_final = (valor_de_compra - depreciacao);
    printf("O valor do carro no ano em questão é de %.2f\n", valor_final);
    
    return 0;
}