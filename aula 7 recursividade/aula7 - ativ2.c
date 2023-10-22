#include<stdio.h>
int func(int n);
int main(){
int n, i, r=0, aux=0;
    printf("Digite um numero para somar com seus antecessores sucessivamente: ");
    scanf("%d", &n);
//inico calculo interartivo
    printf("\nCalculo interativo:\n");
    for (i = 1 ; i <= n; i++){
            aux = r + i; // aux = resultado + indice++
            r = aux;        //resultado = aux
    }
    printf("%d\n",r);
//inico função recursiva
    printf("\nCalculo da funcao recursiva:\n");
    n = func(n);
    printf("%d\n", n);
}
//função faz a somatoria do numero inserido e anteriores;
int func(int n){
    if(n == 0){
        return 0;
    }
    return(n + func(n-1));
}
