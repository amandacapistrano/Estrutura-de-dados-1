/*Escreva um programa que solicita ao usuário a quantidade de alunos de uma
turma aloque um vetor dinamicamente com esta quantidade e armazene as
notas dos alunos. Depois de coletar do teclado, armazenar no vetor dinâmico e
imprimir as notas de todos os alunos, imprime também a média aritmética de
toda a turma. Entregue no Moodle.*/
#include<stdlib.h>
#include<stdio.h>
int main(){
    float *alunos = NULL, soma =0, media;
    int  quant, i;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &quant);

    //criação do vetor
    alunos = (float*) malloc(quant * sizeof(float));
    if(alunos == NULL){
        printf("Erro: Sem memoria!\n");
        exit(1);
    }


//coleta das notas:
    printf("Digite a nota de cada aluno\n");
    for(i = 0; i < quant; i++){
        printf("Aluno[%2d]: ", i+1);
        scanf("%f", &alunos[i]);
        soma = soma + alunos[i];

    }
//impressão dos dados
    printf("\nRelatorio de notas\n");
    media = alunos[i]/quant;
    for(i = 0; i < quant; i++){
        printf("Aluno %2d - nota: %.2f\n", i+1, alunos[i]);
    }
    media = soma / quant;
    printf("\nNota media da turma: %.2f\n", media);

    free(alunos);
}
