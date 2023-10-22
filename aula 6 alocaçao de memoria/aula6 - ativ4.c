/*Explique os seguintes c�digos e entregue no Moodle:*/

void funcao_troca_inteiros(int *a, int *b){ //fun��o com parametros para trocar dois inteiros
    int *aux; //cria��o de ponteiro para auxiliar troca
    aux = (int*) malloc(sizeof(int)); //reservando a posi�ao memoria
    if (aux == NULL){
        printf("memoria insuficiente\n");
        exit(1);
    }else{ // se houver memoria
        *aux = *a; //a variavel auxiliar recebe a memoria da variavel a
        *a = *b; // a varivel a passa a ter a memoria de b
        *b = *aux // e b passa a ter a memoria originalmente de a que foi armazenada anteriormente em aux
        free(aux);// agora que aux n�o ser� mais utilizada a memoria � liberada
    }
}
/*-------------------------------*/
void main(){
char *p; //declara��o do ponteiro tipo char
p = (char*)malloc(4*sizeof(char)); // alocando a memoria para o ponteiro com tamanho de 4 char
strcpy(p,"IFSP"); //p recebe a string IFSP de 4 char
p = (char*)realloc(p, 15*sizeof(char)); //p � realocada e passa a alocar o tamanho de 15 char
strcat(p,"-Guarulhos");//� feito a concatena��o de p com a string -Guarulhos
print("%s", p); //printa o resultado da concatena��o das strings "IFSP-GUARULHOS"
free(p);//apos o fim do programa a memoria alocada para p � liberada
}
