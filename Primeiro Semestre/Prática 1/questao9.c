//Faça um programa em C que converta uma idade expressa em anos, meses e dias para um valor em dias. Considere um ano com 365 dias e um mês com 30 dias.

#include <stdio.h>
#include <math.h>

int main() {
    
    //Entrada de Valores
    int ano = 0;
    printf("Entre com os anos: ");
    scanf("%i", &ano);

    int mes = 0;
    printf("Entre com os meses: ");
    scanf("%i", &mes);

    int dias = 0;
    printf("Entre com os dias: ");
    scanf("%i", &dias);

    //Cálculo de idade
    int anos_em_dias = ano*365;
    int meses_em_dias = mes*30;

    //Saída
    int total = anos_em_dias+meses_em_dias+dias;
    printf("A idade em dias é correspondente a %i", total);
    
    return 0;
}