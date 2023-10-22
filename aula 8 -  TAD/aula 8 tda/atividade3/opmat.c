#include <stdio.h>
#include <stdlib.h>
#include "opmat.h"
struct valores{
    float a;
    float b;
};


Valores *criaVal(float a, float b){
    Valores *val = (Valores*) malloc(sizeof(Valores));
    if(val!=NULL){
        val->a = a;
        val->b = b;
    }
    return val;
}

void liberaVal(Valores *val){
    free(val);
}

void acessaVal(Valores *val, float *a, float *b){
    *a = val->a;
    *b = val->b;
}

void atribuiVal(Valores *val, float a, float b){
    val->a = a;
    val->b = b;
}

float valSoma(Valores *va){
    float res = va->a + va->b;
    return res;
}

float valSubtrai(Valores *va){
    float res = va->a - va->b;
    return res;
}

float valMultiplica(Valores *va){
    float res = va->a * va->b;
    return res;
}

float valDivide(Valores *va){
    float res = va->a / va->b;
    return res;
}
