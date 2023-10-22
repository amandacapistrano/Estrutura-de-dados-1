#include <stdio.h>

void somaPont(int *pontx, int *ponty, int *pontz);

void main(){
int x, y, z;
int *pontx, *ponty, *pontz;

printf("Digite um numero: ");
scanf("%d", &x);
printf("Digite um segundo numero: ");
scanf("%d", &y);
printf("Digite um terceiro numero: ");
scanf("%d", &z);

pontx = &x;
ponty = &y;
pontz = &z;

printf("Valores recebidos:\n%d, %d, %d\n", *pontx, *ponty, *pontz);

somaPont(pontx, ponty, pontz);
printf("Valores finais:\n%d, %d, %d", x, y, z);
}

void somaPont(int *pontx, int *ponty, int *pontz){
    *pontx = *pontx + 100;
    *ponty = *ponty + 100;
    *pontz = *pontz + 100;
}




