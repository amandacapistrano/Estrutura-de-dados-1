#include<stdio.h>
int main(){
float vet[10];
int i;

for(i = 0 ; i < 10 ; i++){
printf("Endereco da posicao %2d: %p\n", i+1, &vet[i]);
}
}
