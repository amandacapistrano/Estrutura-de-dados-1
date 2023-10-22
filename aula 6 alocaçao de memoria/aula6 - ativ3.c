/*Elabore um programa que calcule a soma de duas matrizes (M x N) dinâmicas de
números inteiros. Deve-se considerar as dimensões fornecidas pelo usuário.
Entregue no Moodle.*/
#include<stdlib.h>
#include<stdio.h>
int main(){
   int **m, **n, linhas, colunas, i, j;
//coleta das dimensoes das matrizes
   printf("Digite a quantidade de linhas e colunas das matrizes: ");
   scanf("%d %d", &linhas, &colunas);
//criaçao da matriz m
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
//criaçao da matriz n
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
//exibição dos valores das matrizes
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
//liberação da memoria
    for(i = 0; i < linhas; i++){
        free(m[i]);
    }
    free(m);

     for(i = 0; i < linhas; i++){
        free(n[i]);
    }
    free(n);

}
