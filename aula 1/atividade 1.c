#include <stdio.h>

int main()
{
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1 :
            printf("A");
        break;

        case 2 :
            printf("B");
        break;

        case 3 :
            printf("C");
        break;

        case 4 :
            printf("D");
        break;

        default:
            printf("0");

    }
}
