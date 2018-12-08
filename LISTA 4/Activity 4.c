#include <stdio.h>
#include <stdlib.h>

/* 4-Calcular a seguinte expressao:
    37x38/1 + 36x37/2 + 35x36/3 + 34x35/4 + ... 1x2/37 */

int main()
{
    float resultado, acum = 0;
    int conta, a, b, c;

    for (conta = 1; conta <= 37 ; conta++)
    {
        system(" cls ");
        printf(" Digite o valor do numerador a multiplicar: ");
        scanf("%d",&a);
        printf(" \n Digite o valor do numerador a ser multiplicado: ");
        scanf("%d",&b);
        printf(" \n Digite o valor do denominador: ");
        scanf("%d",&c);

        resultado = (a * b) / c;
        acum = acum + resultado;
    }
    printf(" O resultado total e %.2f.",acum);

    system("pause > null");
}
