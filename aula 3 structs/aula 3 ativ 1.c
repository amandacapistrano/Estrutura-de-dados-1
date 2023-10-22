#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct funcionario{
    int ID;
    char nome[30];
    int idade;
    float salario;
};

void main(){
int i = 0;
struct funcionario f[5];
for (i = 0;  i < 5 ; i++){
    printf("Digite os dados do funcionario %d: \n", i+1);
    printf("ID: ");
    scanf("%d", &f[i].ID);

    getchar(); fflush(stdin);

    printf("Nome: ");
    fgets(f[i].nome,30, stdin);

    printf("Idade: ");
    scanf("%d",&f[i].idade);


    printf("Salario: R$ ");
    scanf("%f", &f[i].salario);

    printf("\n");
}
printf("Dados dos funcionarios");
for(i = 0; i < 5 ; i++){
    printf("\nFuncionario %d, ID: %d, nome: %s, idade: %d, salario: R$ %.2f", i+1, f[i].ID, f[i].nome, f[i].idade, f[i].salario);
    printf("--------------------\n");
}


}
