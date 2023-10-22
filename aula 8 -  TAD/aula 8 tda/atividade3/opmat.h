typedef struct valores Valores;

Valores *criaVal(float a, float b);

void liberaVal(Valores *val);

void acessaVal(Valores *val, float *a, float *b);

void atribuiVal(Valores *val, float a, float b);

float valSoma(Valores *va);

float valSubtrai(Valores *va);

float valMultiplica(Valores *va);

float valDivide(Valores *va);
