/*Faça um programa que aloque memoria para um vetor dinâmico com n
números inteiros ímpares maiores que 0, em seguida imprima o vetor. Entregue
no Moodle.*/
#include<stdlib.h>
#include<stdio.h>

int main(){
    int *vetor = NULL , i,n, nImpar = 1;
    printf("Quantos numeros tera no vetor? ");
    scanf("%d", &n);

    vetor =  (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        vetor[i] = i ;
        nImpar += 2;
        printf("vetor[%2d]: %2d\n", i, nImpar);
    }
    free(vetor);
}
