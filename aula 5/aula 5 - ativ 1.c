#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){
FILE *f, *f2;
f = fopen("arq1.txt", "w");
f2 = fopen("arq2.txt", "w");
if(f == NULL || f2 == NULL){
    printf("Erro na abertura!");
    system("pause");
    exit(1);
}
//recebimento do texto
char texto[100];
printf("Digite um texto de ate 100 caracteres: ");
gets(texto);
//gravacao do texto para o arq1
int gravacao = fputs(texto, f);
if(gravacao == EOF){
    printf("Erro na gravacao");
}
fclose(f);
//abrir arq1 para leitura
f = fopen("arq1.txt", "r");
//gravando arq1 maiusculo em arq2
char c = fgetc(f);
while(c != EOF){
    fputc(toupper(c), f2);
    c=fgetc(f);
}
fclose(f);
fclose(f2);
//Abrir para leitura arq 1:
f = fopen("arq1.txt", "r");
printf("\narq1:\n ");
char m = fgetc(f);
while(m != EOF){
    printf("%c", m);
    m = fgetc(f);
}
printf("\n");
fclose(f);
//Abrir para leitura arq 2:
printf("\narq2:\n ");
f2 = fopen("arq2.txt", "r");
char M = fgetc(f);
while(M != EOF){
    printf("%c", M);
    M = fgetc(f);
}
printf("\n\n");
fclose(f);
fclose(f2);

system("pause");
return 0;
}
