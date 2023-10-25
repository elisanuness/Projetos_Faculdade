//Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.

#include <stdio.h>

int main() {

    //Entrada de Valores
    int nota = 0;
    printf("Insira uma nota entre 1 e 5: ");
    scanf("%d",&nota);

    //Cálculo
    int nota_ruim = nota == 1;
    int nota_insuficiente = nota == 2;
    int nota_suficiente = nota == 3;
    int nota_bom = nota == 4;
    int nota_otimo = nota == 5;

    //Saída
    switch (nota){
        case 1: printf("Ruim"); break;
        case 2: printf("Insuficiente"); break;
        case 3: printf("Suficiente"); break;
        case 4: printf("Bom"); break;
        case 5: printf("Otimo"); break;
        default : printf("Nota inválida!"); break;
    }
  
return 0;
}