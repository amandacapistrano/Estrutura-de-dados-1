#include <stdio.h>
#include <stdlib.h>
#include "ATIV1.h"

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


