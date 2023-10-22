#include<stdio.h>
int main(){
int num1, num2;
int *p1, *p2;
p1 = &num1;
p2 = &num2;

printf("Digite um numero: ");
scanf("%d", &num1);
printf("Digite outro numero: ");
scanf("%d", &num2);

if (p1 > p2){
    printf("O maior endereco e da variavel num1: %p e seu conteudo: %d", p1, *p1);
}else
if (p2 > p1){
    printf("O maior endereco e da variavel num2: %p e seu conteudo: %d", p2, *p2);
}
}

