typedef struct aluno{
    int matricula;
    float n1, n2, n3;
}ALUNO;

typedef struct elemento* Lista;

//criando a Lista
Lista *criaLista();

//liberando a lista
void apagaLista(Lista *li);

//tamanho
int tamLista(Lista *li);

 //lista cheia
 int listaCheia(Lista *li);

  //lista vazia
  int listaVazia(Lista *li);

  //inserçao inicio
  int insere_inicio_lista(Lista *li,ALUNO al);

  //insercao no final
  int insere_final_lista(Lista *li, ALUNO al);

  //insercao ordenada
  int insere_lista_ordenada(Lista *li, ALUNO al);

  //remocao inicio
  int remove_inicio_lista(Lista *li);

  //removacao final
  int remove_final_lista(Lista *li);

  //remocao qualquer
  int remove_lista(Lista *li,int mat);

  //consulta por posicao
int consulta_lista_pos(Lista *li, int posicao, ALUNO *al);

//consulta por conteudo
int consulta_lista_mat(Lista *li, int mat, ALUNO *al);

