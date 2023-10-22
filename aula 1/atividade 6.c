#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char text[120], string[120];
    char space = ' ';
    int x, cont = 0, i = 0;

    printf("Digite um pequeno texto e de enter ao finalizar: ");
    gets(text);

    //contagem dos espaços:
    for(x = 0; x < strlen(text); x++){
        if(text [x] == space){
            cont++;
        }
    }
    printf("Aparecem %d espacos no texto.", cont);

    //remoção dos espaços:
    for (i = 0, x = 0; i < strlen(text); i++){
        if(text[i] != space){
            string[x++] = text[i];
        }
    }
    printf("\nTexto sem espacos: ");
    puts(string);
}
