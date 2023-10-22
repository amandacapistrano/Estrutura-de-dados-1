#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct funcionario{
    int ID;
    char Nome[30];
    int Idade;
    float Salario;
}FUNCIONARIO;

FUNCIONARIO coletaDados();

int main(){
    FILE *f = fopen("struct1.txt", "wb");
    if(f == NULL){
        printf("Erro na abertura\n");
        system("pause");
        exit(1);
    }

    int i, n = 2;
    FUNCIONARIO func[5];
    printf("Coleta de dados:\n");
     for (i = 0; i < n; i++){
        printf("Digite os dados do funcionario %d: \n", i+1);
        func[i] = coletaDados();
        printf("\n");
    }

    fwrite(func, sizeof(FUNCIONARIO), 5, f);
    fclose(f);
    system("pause");
    return 0;
}
FUNCIONARIO coletaDados(){

    FUNCIONARIO func;

    printf("ID: ");
    scanf("%d", &func.ID);
    getchar();

    printf("Nome do funcionario: ");
    fgets(func.Nome, 29, stdin);
    func.Nome[strlen(func.Nome) - 1] = '\0';

    printf("Idade: ");
    scanf("%d", &func.Idade);

    printf("Salario: R$ ");
    scanf("%f", &func.Salario);
    return func;
}




