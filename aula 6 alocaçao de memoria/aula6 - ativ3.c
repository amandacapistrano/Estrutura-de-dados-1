/*Elabore um programa que calcule a soma de duas matrizes (M x N) din�micas de
n�meros inteiros. Deve-se considerar as dimens�es fornecidas pelo usu�rio.
Entregue no Moodle.*/
#include<stdlib.h>
#include<stdio.h>
int main(){
   int **m, **n, linhas, colunas, i, j;
//coleta das dimensoes das matrizes
   printf("Digite a quantidade de linhas e colunas das matrizes: ");
   scanf("%d %d", &linhas, &colunas);
//cria�ao da matriz m
   m = (int**) malloc(linhas * sizeof(int*));
   for(i = 0; i < linhas; i++){
        m[i] = (int*) malloc(colunas * sizeof(int));
   }
   //coleta de valores matriz m
   printf("Digite os valores da matriz M\n");
   for(i = 0; i < linhas; i++){
    for(j = 0; j< colunas; j++){
        printf("M[%d,%d]: ", i+1, j+1);
        scanf("%d", &m[i][j]);
    }
   }
//cria�ao da matriz n
   n = (int**) malloc(linhas * sizeof(int*));
   for(i = 0; i < linhas; i++){
        n[i] = (int*) malloc(colunas * sizeof(int));
   }
   //coleta de valores matriz n
   printf("Digite os valores da matriz N\n");
   for(i = 0; i < linhas; i++){
    for(j = 0; j< colunas; j++){
        printf("N[%d,%d]: ", i+1, j+1);
        scanf("%d", &n[i][j]);
    }
   }
//exibi��o dos valores das matrizes
    printf("Soma das matrizes:\n");
    printf("Matriz M\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%2d", m[i][j]);
        }
        printf("\n");
    }
    printf("Matriz N\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%2d", n[i][j]);
        }
        printf("\n");
    }
//soma
   printf("M + N\n");
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%2d", m[i][j] + n[i][j]);
        }
        printf("\n");
    }
//libera��o da memoria
    for(i = 0; i < linhas; i++){
        free(m[i]);
    }
    free(m);

     for(i = 0; i < linhas; i++){
        free(n[i]);
    }
    free(n);

}
