#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//Quando se usa typedef voce cria um novo tipo de dado (como int, float, char etc...)
 typedef struct funcionarios{ //Deixei com nome pq vou dar uma explicaç]ao sobre
    int ID;
    char nome[30];
    int idade;
    float salario;
}FUNCIONARIOS; //A partir daqui essa estrutrua pode ser chamada tanto por "struct funcionarios" tanto como "FUNCIONARIOS"

FUNCIONARIOS ColetarDados(); //Por causa do tupedef FUNCIONARIOS passou a ser um tipo
void PrintarTela(FUNCIONARIOS *func); //Por causa do tupedef FUNCIONARIOS passou a ser um tipo
void reajuste(float *salario); //leva consigo um numero
void rel_salario_corrigido(char nome[],float salario); //leva consigo o nome e o salario

int main (void) {

    FUNCIONARIOS funcionario[5];

    int n = 5;

    for (int i = 0; i < n; i++){
       funcionario[i] = ColetarDados(); //Ele vai chamar a funç]ao ColetaDados() para cada funcionario e salvar os dados
     }

     printf("\nFuncionarios: \n");
     for (int i = 0; i < n; i++) {
        PrintarTela(&funcionario[i]); //Cada funcionario tera seus dados printados
     }

     for(int i = 0; i < 5; i++) {
        reajuste(&funcionario[i].salario); //Vai reajustar o salario
     }

    printf("\nO novo salario dos funcionarios: \n");
     for (int i = 0; i < n; i++){
        rel_salario_corrigido(funcionario[i].nome, funcionario[i].salario); //Vai levar o nome e o salario do funcionario pra ser printado
     }
}


FUNCIONARIOS ColetarDados() {
    FUNCIONARIOS var_temporaria; //Cria uma estrutura chamada var:temporaria


    printf("Digite o ID do funcionario: ");
        scanf("%d", &var_temporaria.ID);

    getchar(); fflush(stdin);

    printf("Digite o nome do funcionario: ");
        fgets(var_temporaria.nome, 29, stdin); //Pega o que foi digitado pelo usuario, obs: sempre tem que ser 1 a menos que o tamanho do char
                                               //Pra assim o ultimo valor ser '\0'

    //Comando mega complicado simplesmente para trocar o \n do fim da sting pra \0
    var_temporaria.nome[strlen(var_temporaria.nome) - 1] = '\0';

    printf("Digite a idade do funcionario: ");
        scanf("%d", &var_temporaria.idade);

    printf("Digite o salario do funcionario: ");
        scanf("%f", &var_temporaria.salario);


    return var_temporaria; //Retorna a estrutura "var_temporaria" TODA, como ela vem do mesmo modelo que a "funcionario" ocorre sem problemas
}


void PrintarTela(FUNCIONARIOS *func) {
    /*Diferente da função "reajustar" ou "rel_salario_corrigido"
    A função "PrintarTela" leva estrutura TODA

    Se olhar a função esta como "void PrintarTela(FUNCIONARIOS *func)"
    Ela poderia estar "void PrintarTela(struct funcionario *func)"
    Em ambos o resultado seria o mesmo, a diferença e que em um voce não precisa digitar "struct" já no outro sim

    Como voce levou a estrutura toda a "mecanica dela é diferente"
    Se voce fizer "*func.ID" ele vai dar um erro por precedencia, pq o "." tem maior prioridade do que o "*",
    Então ele executa func.id pra depois executer o "*", fazendo com que ele procure algo sem nem saber onde tá
    Para resolver esse probelama de precedÊncia existem duas formas uma com parenteses e a outra com seta (->)
    Com parenteses seria:
    (*func).ID
    Assim ele executa *func, depois de executar ficaria algo como: endereço_da_informação.ID, ai ele iria ate o endereço e pegaria o valor que ta em ID

    Com seta:
    func->ID
    Funciona da mesma forma, ele pega o endereço de func, vai até ele e pega o valor de ID

    Ambas as formas são corretas, mas a de sera é visivelmente mais atrante
    */



    //Pega a estrutura que foi "puxada" e printa ela
    printf("\nID: %i\n", func->ID);
    printf("Nome: %s\n", func->nome);
    printf("Idade: %i\n", func->idade);
    printf("Salario: %.2f\n", func->salario);
}

void reajuste(float *salario) { //Ele recebe o endereço de uma parte da estrutura, no caso o funcionario.salario
    *salario += *salario * 0.1;
    /*Altera o salario, como ele é um ponteiro, a alteração vai ocorrer diretamente onde a informação esta,
    o que acaba fazendo nao precisar retornar um valor, por isso o "void" antes do nome da função
    */
}

void rel_salario_corrigido(char nome[], float salario) { //Como a função esta recebendo "campos" da estrutura o funcionamento é igual ao que seria feito com uma variavel qualquer
    printf("\nNome: %s\n", nome); //no momento da chamada de função o funcionario[i].nome foi copiado pra variavel nome, então voce usa a variavel "nome"
    printf("Salario: %.2f\n", salario); //no momento da chamada de função o funcionario[i].salario foi copiado pra variavel salario, então voce usa a variavel "salario"
}
