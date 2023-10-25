//Faça um programa que C que calcule os impostos incluídos no preço de um produto (preço final = (1 + ICMS + COFINS + PIS/PASEP) x preço inicial). Considere ICMS igual a 17%, COFINS igual a 7,6% e PIS/PASEP igual a 1,65%.

#include <stdio.h>
#include <math.h>

int main () {
    //Entrada de Valores:
    float inicial = 0.0f;
    printf("Informe o preço inicial do produto: ");
    scanf("%f", &inicial);

    //Cálculo de Impostos:
    float ICMS = inicial*0.17f;
    printf ("O valor do imposto ICMS é de %.4f\n", ICMS);
    float COFINS = inicial*0.076f;
    printf ("O valor do imposto COFINS é de %.4f\n", COFINS);
    float PIS_PASEP = inicial*0.0165;
    printf ("O valor do imposto PIS/PASEP é de %.4f\n", PIS_PASEP);

    //Resultado:
    float fim = (1+ICMS+COFINS+PIS_PASEP)*inicial;
    printf("O preço final é %.4f\n", fim);

    return 0;
}