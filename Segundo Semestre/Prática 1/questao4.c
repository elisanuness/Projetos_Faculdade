// Use ponteiros para imprimir valores de uma matriz.

#include <stdio.h>

int num[3][4] = {
{1,2,3,4},
{5,6,7,8},
{9,10,11,12}
};

int main (void) {

  //Imprimindo a matriz
    for(int lin =0; lin < 3; lin ++){
        for (int col = 0; col< 4; col++){ 
            printf("mat[%d][%d]:%d\n", lin, col, num[lin][col]);
        }
    }

    int *p = (int *)num;
    for(int i = 0; i < 3 * 4; i++) { 
	    printf("num[%d]: %d\n", i, p[i]); 
    }

    for (int i =0; i<3; i++){
        for(int j = 0; j<4; j++){
            printf("mat[%d][%d]");
        }
    }

return 0;
}