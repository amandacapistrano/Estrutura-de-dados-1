#include <stdio.h>
#include <stdlib.h>
#include "pilhaD.h"
int main()
{
    Pilha *pi;
    int x;
    pi = cria_pilha();

    struct aluno al;
    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;


   x = insere_pilha(pi, al);
   if(x){
        printf("\nElemento inserido com sucesso!");
   }else{
    printf("\nErro, elemento nao inserido!");
   }

      x = tamanho_pilha(pi);
   printf("\nO tamanho da pilha e: %d", x);


      x = pilha_cheia(pi);
   if(x){
        printf("\nA pilha esta cheia!");
   }else{
    printf("\nA pilha nao esta cheia!");
   }

     x = pilha_vazia(pi);
   if(x){
        printf("\nA pilha esta vazia!");
   }else{
    printf("\nA pilha nao esta vazia!");
   }


   x = consulta_pilha(pi, &al);
   if(x){
        printf("\nConsulta realizada com sucesso:");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1: %2.f", al.n1);
        printf("\nNota 1: %2.f", al.n2);
        printf("\nNota 1: %2.f", al.n3);
   }else{
        printf("\nErro, consulta nao realizada.");
   }

      x = remove_pilha(pi);
    if(x){
        printf("\nElemento removido com sucesso!");
    }else{
        printf("\nErro, elemento nao removido.");
    }


    destroi_pilha(pi);
}

