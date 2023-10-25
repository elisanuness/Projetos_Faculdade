//Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.

#include <stdio.h>
#include <math.h>

int main() {

    //Entrada de Valores
    float valor_hora = 0.0f;
    int horas_trabalhadas = 0;

    printf("Entre com o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);
    printf("Entre com o valor de horas trabalhadas no mês: ");
    scanf("%i", &horas_trabalhadas);

    //Cálculos e Saídas
    float salario_bruto = valor_hora*horas_trabalhadas;
    printf("O valor do salário bruto é de %.2f\n", salario_bruto);

    const float inss = 0.11;
    const float ir = 0.25;

    float imposto_inss = salario_bruto*inss;
    printf("O valor pago no INSS é de %.2f\n", imposto_inss);
    float imposto_ir = salario_bruto*ir;
    printf("O valor pago no IR é de %.2f\n", imposto_ir);

    float salario_liquido = salario_bruto-imposto_ir-imposto_inss;
    printf("O valor do salário líquido é de %.2f\n", salario_liquido);

    return 0;
}