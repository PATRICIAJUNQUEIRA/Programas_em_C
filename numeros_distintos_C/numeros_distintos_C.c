#include <math.h>
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4, soma;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);
    printf("Digite o quarto número: ");
    scanf("%d", &num4);

    if (num1 > num2 && num1 > num3 && num1 > num4)
    {
        soma = (num2 + num3 + num4);
        printf("A Soma é: %d", soma);
    }

    else if (num2 > num1 && num2 > num3 && num2 > num4)
    {
        soma = num1 + num3 + num4;
        printf("A Soma é: %d", soma);
    }

    else if (num3 > num1 && num3 > num2 && num3 > num4)
    {
        soma = num1 + num2 + num4;
        printf("A Soma é: %d", soma);
    }

    else if (num4 > num1 && num4 > num2 && num4 > num3)
    {
        soma = num1 + num2 + num3;
        printf("A Soma é: %d", soma);
    }

    return 0;
}
