//Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.

#include <stdio.h>

int main () {

    //Entrada de Valores
    char nome[30] = "";
    printf("Insira o nome do produto: ");
    scanf("%s", nome);
    
    float valor_bruto = 0.0f;
    printf("Insira o valor bruto: ");
    scanf("%f", &valor_bruto);

    //Cálculos e Saídas
    if (valor_bruto <= 100.00){
        float desconto = valor_bruto*0.01;
        printf("O desconto sobre o valor bruto foi de %.2f\n", desconto);
        float finali = valor_bruto - desconto;
        printf("O valor bruto final é de %.2f\n", finali);

        printf("------------------- NOTA LEGAL -------------------\n");
        printf("Nome         Valor Bruto    Desconto   Valor Final\n");
        printf("%-13.13s %-11.2f -%-12.2f %-14.2f\n", nome, valor_bruto, desconto, finali);
    } else if(valor_bruto> 100.00 || valor_bruto <=500.00){
        float desconto = valor_bruto*0.05;
        printf("O desconto sobre o valor bruto foi de %.2f\n", desconto);
        float finali = valor_bruto - desconto;
        printf("O valor bruto final é de %.2f\n", finali);
    } else if(valor_bruto> 500.00){
        float desconto = valor_bruto*0.1;
        printf("O desconto sobre o valor bruto foi de %.2f\n", desconto);
        float finali = valor_bruto - desconto;
        printf("O valor bruto final é de %.2f\n", finali);
    }

    return 0;
}