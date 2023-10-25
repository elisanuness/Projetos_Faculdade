//Encontre um 'ch' dentro de uma palavra.

#include <stdio.h>

char *localizarCh(char *str){
   char *findCh = NULL;
for (int i =0; i<20; i++){
   if(*str == 'c'){
     if(*(str+1) == 'h'){
       findCh = str;
     }
   }
}

if(findCh==NULL){
    return NULL;
} else return str;
}

int main() {
    char s[20];
    char *str = s;

    printf("Insira a palavra: ");
    scanf("%[^\n]s", s);

    char *localizando;
    localizando = localizarCh(str);
    if (localizando == NULL){
        printf("Não há ch");
    } else printf("O endereço de ch é: %u", localizando);

return 0;
}