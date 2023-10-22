#include<stdio.h>
#include<stdlib.h>
#include "listaDDupla.h"

int main()
{
    Lista *li;

    int x, matricula = 120, pos = 2;


    struct aluno al, al2, al3, dados_alunos;

    al.matricula = 100;
    al.n1 = 5.3;
    al.n2 = 6.9;
    al.n3 = 7.4;

    al2.matricula = 120;
    al2.n1 = 4;
    al2.n2 = 2.9;
    al2.n3 = 8.4;

    al3.matricula = 110;
    al3.n1 = 1.3;
    al3.n2 = 2.9;
    al.n3 = 3.4;

    li = cria_lista();

   x = insere_lista(li, al2);
   if(x){
        printf("\nAluno inserido no meio com sucesso!");
   }else{
        printf("\nErro! Aluno nao inserido.");
   }


   x= insere_lista_inicio(li, al);
   if(x){
        printf("\nAluno inserido no inicio com sucesso!");
   }else{
        printf("\nErro! Aluno nao inserido.");
   }

   x = insere_lista_final(li, al3);
   if(x){
        printf("\nAluno inserido no final com sucesso!");
   }else{
        printf("\nErro! Aluno nao inserido.");
   }


   x = tamanho_lista(li);
   printf("\nO tamanho da lista e: %d", x);

   x = lista_cheia(li);
   if(x){
        printf("\nA lista esta cheia!");
   }else{
    printf("\nA lista nao esta cheia.");
   }

   x = lista_vazia(li);
   if(x){
        printf("\nA lista esta vazia!");
   }else{
        printf("\nA lista nao esta vazia.");
   }



    x =  consulta_lista_pos(li, pos, &al);
    if(x){
        printf("\nConsulta realizada com sucesso: ");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1: %.2f", al.n1);
        printf("\nNota 2: %.2f", al.n2);
        printf("\nNota 3: %.2f", al.n3);
    }else{
        printf("\nErro, consulta nao realizada.");
    }

    x = consulta_lista_mat(li, matricula, &al);
    if(x){
        printf("\nConsulta realizada com sucesso: ");
        printf("\nMatricula: %d", al.matricula);
        printf("\nNota 1: %.2f", al.n1);
        printf("\nNota 2: %.2f", al.n2);
        printf("\nNota 3: %.2f", al.n3);
    }else{
        printf("\nErro, consulta nao realizada.");
    }


   x = remove_lista_inicio(li);
   if(x){
        printf("\nElemento removido no inicio com sucesso!");
   }else{
        printf("\nErro! Elemento nao removido.");
   }

   x = remove_lista_final(li);
   if(x){
        printf("\nElemento removido no final com sucesso!");
   }else{
        printf("\nErro! Elemento nao removido.");
   }

    x = remove_lista(li, matricula);
    if(x){
        printf("\nElemento removido no final com sucesso!");
    }else{
        printf("\nErro! Elemento nao removido");
    }


   destroi_lista(li);

}
