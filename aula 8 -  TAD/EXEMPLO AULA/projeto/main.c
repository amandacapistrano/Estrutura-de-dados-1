#include<stdio.h>
#include<stdlib.h>
#include "minhalib.h"

int main(){
int n, j;
int res_it, res_rec;
printf("entre com numero: ");
scanf("%d", &n);
printf("Versao interativa\n ");
func_it(n);
printf("\n\n");
printf("Versao recursiva");
printf("\n\n");
j = func_rec(n);
printf("\n\n\n\n");

}
