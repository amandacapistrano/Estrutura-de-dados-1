/*Explique os seguintes códigos e entregue no Moodle:*/

void funcao_troca_inteiros(int *a, int *b){ //função com parametros para trocar dois inteiros
    int *aux; //criação de ponteiro para auxiliar troca
    aux = (int*) malloc(sizeof(int)); //reservando a posiçao memoria
    if (aux == NULL){
        printf("memoria insuficiente\n");
        exit(1);
    }else{ // se houver memoria
        *aux = *a; //a variavel auxiliar recebe a memoria da variavel a
        *a = *b; // a varivel a passa a ter a memoria de b
        *b = *aux // e b passa a ter a memoria originalmente de a que foi armazenada anteriormente em aux
        free(aux);// agora que aux não será mais utilizada a memoria é liberada
    }
}
/*-------------------------------*/
void main(){
char *p; //declaração do ponteiro tipo char
p = (char*)malloc(4*sizeof(char)); // alocando a memoria para o ponteiro com tamanho de 4 char
strcpy(p,"IFSP"); //p recebe a string IFSP de 4 char
p = (char*)realloc(p, 15*sizeof(char)); //p é realocada e passa a alocar o tamanho de 15 char
strcat(p,"-Guarulhos");//é feito a concatenação de p com a string -Guarulhos
print("%s", p); //printa o resultado da concatenação das strings "IFSP-GUARULHOS"
free(p);//apos o fim do programa a memoria alocada para p é liberada
}
