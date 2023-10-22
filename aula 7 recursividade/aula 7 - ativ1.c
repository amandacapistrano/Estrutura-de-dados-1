#include<stdio.h>
void contRegressiva(n);

int main(){
    int n, i = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);

    printf("Versao interativa\n");
    for(i = n ; i >= 0 ; i--){
        printf("%d\n", i);
    }
    printf("Funcao recursiva\n");
    contRegressiva(n);
}
void contRegressiva(n){
    if(n < 0){
        return;
    }
    printf("%d\n", n);
    return (contRegressiva(n-1));
}
