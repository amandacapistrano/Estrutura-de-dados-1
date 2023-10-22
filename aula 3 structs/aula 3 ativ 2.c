#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct funcionario{
    int ID;
    char Nome[30];
    int Idade;
    float Salario;
}FUNCIONARIO;
int i = 0;

void imprimeTela(FUNCIONARIO f[5]);
void coletaDados(FUNCIONARIO *f[i]);

int main(){

    FUNCIONARIO f[5];
    printf("Coleta de dados:\n");
     for (i = 0; i < 5; i++){
        printf("Digite os dados do funcionario %d: \n", i+1);
        coletaDados(&f[i]);
        printf("\n");
        i = i + 1;
    }

    printf("Dados dos funcionarios");
    for(i = 0; i < 5 ; i++){
        imprimeTela(f);
        printf("--------------------\n");
    }
}

void coletaDados(FUNCIONARIO *f[i]DataIn){
    int pegaID;
    char pegaNome[30];
    int pegaIdade;
    float pegaSalario;

    printf("ID: ");
    scanf("%d", &pegaID);

    printf("Nome do funcionario: ");
    scanf("%s", &pegaNome, 29, stdin);

    printf("Idade: ");
    scanf("%d",&pegaIdade);


    printf("Salario: R$ ");
    scanf("%f", &pegaSalario);

    (*f[i]DataIn).ID = pegaID;
    strcpy(*f[i]DataIn->Nome, pegaNome);
    (*f[i]DataIn).Idade = pegaIdade;
    (*f[i]DataIn).Salario = pegaSalario;
    system("cls");

}

void imprimeTela (FUNCIONARIO f[i]){
    printf("Funcionarios:\n ID: %d, nome: %s, idade: %d, salario: R$ %.2f", f[i].ID, f[i].Nome, f[i].Idade, f[i].Salario);
}


