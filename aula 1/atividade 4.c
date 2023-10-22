#include<stdio.h>
#include<stdlib.h>

int main(){
    //Declara��o da matriz com 5 linhas e 5 colunas:
    int mtrx[5][5], v[10];
    int i = 0, j = 0, soma = 0;

    printf("Matriz [5]x[5]\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("Digite os valores da matriz na posicao %d e %d: ", i+1,j+1);
            //efetua a leitura de todos os campos da matriz
            scanf("%d", &mtrx[i][j]);
        }
    }
    //exibi��o matriz
    printf("\n\n Matriz [5]x[5]");
    printf("\n----------------\n");
    for (i = 0; i < 5; i++){
        for(j = 0; j <5; j++){
            printf(" %2d", mtrx[i][j]);
        }
        printf ("\n");
    }
    printf("----------------\n");

    /*Soma as linhas da matriz, percorre por todas as colunas atrav�s do "j" e por todas as linhas atrav�s do "i".
    */
    printf("\n\nTotal por linha: \n\n");
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            soma = soma + mtrx [i][j];
        }
        printf("\nLinha %d: soma = %d\n", i + 1, soma);
        v[i] = soma;
        soma = 0;
    }
    /*Soma as colunas da matriz, percorre todas as linhas atrav�s do "i" e todas as colunas atrav�s do "j"
    */
    soma = 0;
    printf("\n\nTotal por coluna: \n\n");
    for (j = 0; j < 5; j++){
        for (i = 0; i <5; i++){
            soma = soma + mtrx[i][j];
        }
        printf("\nColuna %d: soma = %d\n", j + 1, soma);
        v[j+5] = soma;
        soma = 0;
    }
    printf("\n");
    //totaliza��o linhas e colunas
    for(i = 0; i < 5; i++){
        printf("\nOs valores da soma da linha %d sao: %d\n", i + 1, v[i]);
        printf("\nOs valores da soma da coluna %d sao: %d\n", i + 1, v[i+5]);
    }
}
