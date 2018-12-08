#include <stdio.h>
#include <stdlib.h>

/*6 - Desenvolva um programa que implemente uma brincadeira
 de "adivinhar" um número pensado por uma pessoa.*/

int main()
{
    int n, r;

    printf("           PROGRAMA 6");
    printf("\n_________________________________");
    printf("\n\n Pense em um numero\n Multiplique ele por 2\n Some 6 ao resultado\n Divida o resultado por 2.. ");
    printf("\n\n Quanto deu o resultado? ");
    scanf("%d",&r);

    n = (r*2-6) /2;

    printf("\n O numero que voce pensou foi %d!",n);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
