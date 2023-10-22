#include<stdio.h>
#include<stdlib.h>

void calculoVantagens (float nHoras, float salarioHoras, int nFilho, float valorFilho, float *salarioBruto, float *salarioFamilia, float *vantagens);
void calculoDeducoes (float taxaIR, float *INSS, float *IRPF, float *deducoes, float *salarioBruto);



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

    calculoVantagens (nHoras, salarioHoras, nFilho, valorFilho, &salarioBruto, &salarioFamilia, &vantagens);
    calculoDeducoes (taxaIR, &INSS, &IRPF, &deducoes, &salarioBruto);

    printf("\nTotais:\nSalario bruto: %.2f e salario familia: %.2f \n", salarioBruto, salarioFamilia);
    printf("A vantagem e de %.2f \n", vantagens);
    printf("Impostos: INSS: %.2f e IRPF: %.2f \n", INSS, IRPF);
    printf("A deducao e %.2f ", deducoes);

}

void calculoVantagens (float nHoras, float salarioHoras, int nFilho, float valorFilho, float *salarioBruto, float *salarioFamilia, float *vantagens){
    *salarioBruto = nHoras * salarioHoras;
    *salarioFamilia = nFilho * valorFilho;
    *vantagens = *salarioBruto + *salarioFamilia;
}

void calculoDeducoes(float taxaIR, float *INSS, float *IRPF, float *deducoes, float *salarioBruto){
    *INSS = *salarioBruto * 0.08;
    *IRPF = *salarioBruto * taxaIR;
    *deducoes = *INSS + *IRPF;
}
