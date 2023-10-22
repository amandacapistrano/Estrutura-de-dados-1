#include <stdio.h>
#include <stdlib.h>
#include "listaLigada.h"

int main()
{   int x, mat = 110, posicao=1;
    Lista *li;
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
    al3.n1= 1.3;
    al3.n2 = 2.9;
    al3.n3 = 3.4;

//criando a Lista
li = criaLista();

   //inserçao inicio
x = insere_inicio_lista(li, al);
if(x){
    printf("\nInserido no inicio com sucesso!");
}else{
    printf("\nNao foi possivel inserir no inicio.");
}
  //insercao no final
x = insere_final_lista(li, al2);
if(x){
    printf("\nInserido no final com sucesso!");
}else{
    printf("|nNao foi possivel inserir no final.");
}
  //insercao ordenada
  x= insere_lista_ordenada(li,al3);
  if(x){

    printf("\nInserido ordenadamente com sucesso!");
  }else{
    printf("\nNao foi possivel inserir ordenadamente.");
  }

//tamanho
x = tamLista(li);
printf("\n\nO tamanho da lista e: %d", x);

   //lista cheia
 if(listaCheia(li)){
    printf("\nLista esta cheia!");
 }else{
    printf("\nLista esta vazia.");
 }


  //consulta por posicao
x = consulta_lista_pos(li,posicao, &al);
if(x){
    printf("\n\nConteudo na posicao: %d", posicao);
    printf("\n%d", al.matricula);
    printf("\n%.2f", al.n1);
    printf("\n%.2f", al.n2);
    printf("\n%.2f", al.n3);
}else{
    printf("Não encontrada");
}
//consulta por conteudo
x = consulta_lista_mat(li, mat, &dados_alunos);
if(x){
    printf("\n\nMatricula encontrada: %d", mat);
    printf("\n%d", dados_alunos.matricula);
    printf("\n%.2f", dados_alunos.n1);
    printf("\n%.2f", dados_alunos.n2);
    printf("\n%.2f", dados_alunos.n3);
}else{
    printf("Não encontrada");
}

 //remocao qualquer
 x = remove_lista(li, mat);
 if(x){
    printf("\n\nRemovido elemento com sucesso!");
 }else{
    printf("\nNao foi possivel remover o elemento.");
 }

  //remocao inicio
x = remove_inicio_lista(li);
if(x){
    printf("\nRemovido do inicio com sucesso!");
}else{
    printf("\nNao foi possivel remover do inicio.");
}

  //remocao final
x= remove_final_lista(li);
if(x){
    printf("\nRemovido do final com sucesso!");
}else{
    printf("\nNao foi possivel remover do final.");
}


   //lista vazia
if(listaVazia(li)){
    printf("\n\nLista esta vazia!");
}else{
    printf("\n\nLista nao esta vazia.");
}

//liberando a lista
apagaLista(li);

}
