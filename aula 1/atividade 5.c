#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    char string1[20], string2[20];
    char busca;
    int x,cont1= 0, cont2 = 0;


    printf("Digite duas palavras dando <enter> entre elas: ");
    gets(string1);
    gets(string2);

    printf("Digite uma letra que deseja encontrar nas palavras: ");
    scanf("%c" , &busca);

    //buscando o char nas strings
    for(x = 0; x < strlen(string1); x++){
        if(string1[x] == busca){
            cont1++;
        }
    }

      for(x = 0; x < strlen(string2); x++){
        if(string2[x] == busca){
            cont2++;
        }
    }
    printf("\n\nA letra \"%c\" aparece %d vez(es) em \"%s\",", busca, cont1, string1);
    printf("\nE aparece %d vez(es) em \"%s\".", cont2, string2);

    //comparando strings
    if(strstr(string1, string2)){
        printf("\n\nA string \"%s\" esta na string \"%s\".", string2, string1);
    }

}
