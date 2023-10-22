#include<stdio.h>
#include<stdlib.h>
int main(){

    int v1[5], v2[5];
    int i = 0, j = 0;
    //preenchimento vetor1
    for (i = 0; i < 5; i++){
       printf("Informe o valor do elemento %d do vetor 1: ", i + 1);
       scanf("%d", &v1[i]);
    }
    //preenchimento vetor2
    for (j = 0; j <5; j++){
        printf("Informe o valor do elemento %d do vetor 2: ", j + 1);
        scanf("%d", &v2[j]);
    }
    //exibe valores do v1
    printf("\n\nVetor 1:\n");
    for (i = 0; i < 5; i++)
        printf(" %d,",v1[i]);
    //exibe valores do v2
    printf("\nVetor 2:\n");
    for (j = 0; j < 5; j++)
        printf(" %d,", v2[j]);

    printf("\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            //exibe valores que são comuns entre os dois vetores:
            if(v1[i] == v2[j]){
                printf("\nValores iguais nas posicoes: %d e %d\n", i+1, j+1);
            }
            //exibe valores diferente entre os vetores:
            else{
                printf("\nValores diferentes nas posicoes: %d e %d\n", i+1, j+1);
            }
        }
    }
    system("pause");
}
