#include <stdio.h>
#include <stdlib.h>
#include "filaD.h"

int main()
{
    Fila *fi;

    int x;

    struct aluno al;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    fi= cria_fila();

    x = insere_fila(fi, al);
    if(x){
        printf("\nElemento inserido com sucesso!");
    }else{
        printf("\nErro, elemento nao inserido.");
    }


    x = tamanho_fila(fi);
    printf("\nO tamanho da fila e: %d", x);

       x = fila_vazia(fi);
    if(x){
        printf("\nA fila esta vazia");
    }else{
        printf("\nA fila nao esta vazia");
    }


       x= fila_cheia(fi);
    if(x){
        printf("\nA fila esta cheia!");
    }else{
        printf("\nA fila nao esta cheia.");
    }


    x = consulta_fila(fi, &al);
    if(x){
        printf("\nConsulta realizada com sucesso!");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1: %.2f", al.n1);
        printf("\nNota 1: %.2f", al.n2);
        printf("\nNota 1: %.2f", al.n3);
    }else{
        printf("\nErro, consulta nao realizada.");
    }

        x = remove_fila(fi);
    if(x){
        printf("\nElemento removido com sucesso!");
    }else{
        printf("\nErro, elemento nao removido.");
    }

    destroi_fila(fi);

};
