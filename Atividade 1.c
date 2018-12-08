#include <stdio.h>
#include <stdlib.h>

/*1-Dado 2 números, calcular as quatro operações aritméticas
  e mostrar os resultados na tela.*/

int main()
{
    int x,y,soma, mult, div, sub;

    printf("           PROGRAMA 1");
    printf("\n_________________________________");
    printf("\n\nDigite um numero: ");
    scanf("%d",&x);
    printf("Digite outro numero: ");
    scanf("%d",&y);

    soma = x + y;
    sub = x - y;
    mult = x * y;
    div = x / y;

    printf("\n\nA soma dos numeros digitados e igual a %d.",soma);
    printf("\nA subtracao dos numeros digitados e igual a %d.",sub);
    printf("\nA multiplicacao dos numeros digitados e igual a %d.",mult);
    printf("\nO resto da divisao dos numeros digitados e igual a %d.",div);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
