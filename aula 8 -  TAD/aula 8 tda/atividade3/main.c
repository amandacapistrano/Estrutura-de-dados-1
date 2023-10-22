#include <stdio.h>
#include <stdlib.h>
#include "opmat.h"

int main()
{   float num1, num2;
    int opcao;
    char op;
    float res;
    Valores *val;

    do{
        {
            printf("\tCalculadora\n\nMenu\n");
            printf("Deseja fazer um calculo?[1]\n");
            printf("Resultado da ultima operacao[2]");
            printf("\nDeseja encerrar a execucao?[3]\n");
            printf("Digite o numero da opcao [] e de enter: ");
            scanf("%d", &opcao);
        }
        if(opcao == 1){
            system("cls");
            printf("\nInsira dois numeros dando enter entre eles: ");
            scanf("%f %f", &num1, &num2);
            printf("Escolha a operacao entre os numeros (+, -, *, /): ");
            scanf(" %c", &op);

            val = criaVal(num1, num2);

            switch(op){
                case '+':
                    res = valSoma(val);
                    printf("\nA soma entre %.2f %c %.2f = %.2f", num1, op, num2, res);
                    break;

                case '-':
                    res = valSubtrai(val);
                    printf("\nA subtracao entre %.2f %c %.2f = %.2f", num1, op, num2, res);
                    break;

                case '*':
                    res = valMultiplica(val);
                    printf("\nA multiplicacao entre %.2f %c %.2f = %.2f", num1, op, num2, res);
                    break;

                case '/':
                    res = valDivide(val);
                    printf("\nA divisao entre %.2f %c %.2f = %.2f", num1, op, num2, res);
                    break;

                default:
                    printf("\nOperacao invalida.");

            }
            liberaVal(val);
        }
        if(opcao == 2){
            system("cls");
            printf("Calculo anterior\n");
             if(op == '+' || op == '-' || op == '*' || op == '/'){
                printf("O resultado anterior foi %.2f %c %.2f = %.2f", num1, op, num2, res);
             }
            else{
                printf("Nao ha resultado anterior");
            }
        }
        if(opcao < 1 || opcao > 4){
            system("cls");
            printf("Opcao invalida!!");
        }
        if (opcao!=3){
        printf("\n\nDeseja encerrar a execucao?[3]\n");
        printf("Deseja voltar ao menu?[4]\n");
        scanf("%d", &opcao);
        }

        system("cls");

    }while(opcao==4);

    printf("Execucao finalizada!!!");

}
