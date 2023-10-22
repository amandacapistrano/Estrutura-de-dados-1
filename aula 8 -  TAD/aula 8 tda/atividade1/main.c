#include <stdio.h>
#include <stdlib.h>
#include "ATIV1.h"



int main(){
float salarioBruto, salarioFamilia, vantagens, INSS, IRPF, deducoes; //variaveis que eram globais

float nHoras, salarioHoras, valorFilho, taxaIR;
int nFilho;

    printf("Digite o salario por hora: ");
    scanf("%f", &salarioHoras);

    printf("Digite quantas horas foram trabalhadas: ");
    scanf("%f", &nHoras);

    printf("Digite a quantidade de filhos: ");
    scanf("%d", &nFilho);

    printf("Digite o valor por filho: ");
    scanf("%f", &valorFilho);

    printf("Digite o valor da taxa IR: ");
    scanf("%f", &taxaIR);



    calculoVantagens(nHoras, salarioHoras, nFilho, valorFilho, &salarioBruto, &salarioFamilia, &vantagens);
    calculoDeducoes(taxaIR, &INSS, &IRPF, &deducoes, &salarioBruto);

    printf("\nTotais:\nSalario bruto: %.2f e salario familia: %.2f \n", salarioBruto, salarioFamilia);
    printf("A vantagem e de %.2f \n", vantagens);
    printf("Impostos: INSS: %.2f e IRPF: %.2f \n", INSS, IRPF);
    printf("A deducao e %.2f ", deducoes);

}
