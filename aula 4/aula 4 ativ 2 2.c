#include<stdio.h>
int main(){
int num1, num2;


printf("Digite um numero: ");
scanf("%d", &num1);
printf("Digite outro numero: ");
scanf("%d", &num2);

if (&num1 > &num2){
    printf("O endereco da variavel num1: %p e maior que o endereço de (num2: %p) e o conteudo de num1 e: %d", &num1, &num2, num1);
}else
if (&num1 < &num2){
    printf("O endereco da variavel num2: %p e maior que o endereço de (num1: %p) e o conteudo de num2 e: %d", &num2, &num1, num2);
}
}
