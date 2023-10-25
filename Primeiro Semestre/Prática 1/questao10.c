//Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    int num = 0;
    printf ("Entre com o valor de um número inteiro: ");
    scanf ("%i", &num);

    //Cálculo da Decomposição
    int milhar = num/1000;
    int resto_milhar = num%1000;
    int centena = resto_milhar/100;
    int resto_centena = resto_milhar%100;
    int dezenas = resto_centena/10;
    int unidades = resto_centena%10;

    //Resultado
    printf("O número %i é decomposto em:\n%i unidades, %i dezenas, %i centenas e %i milhares.", num, unidades, dezenas, centena, milhar);

    return 0;
}