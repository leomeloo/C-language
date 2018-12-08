#include <stdio.h>
#include <stdlib.h>

/* 5- Dado 3 numeros inteiros e não iguais, classifica-los em ordem crescente.
    Ao final, mostrar o resultado na tela do computador. */

int main ()
{
    int n1, n2, n3;

    printf("           PROGRAMA 5");
    printf("\n_________________________________");

    printf(" \n\n Digite o primeiro numero: ");
    scanf("%d",&n1);
    printf(" Digite o segundo numero: ");
    scanf("%d",&n2);
    printf(" Digite o terceiro numero: ");
    scanf("%d",&n3);

    n2 < n1 && n3 < n1 && n3 < n2 ? printf(" \n Em ordem crescente ficara: %d,%d,%d.",n3,n2,n1):
    n1 > n2 && n1 > n3 && n3 > n2 ? printf(" \n Em ordem crescente ficara: %d,%d,%d.",n2,n3,n1):
    n1 < n2 && n3 < n2 && n3 < n1 ? printf(" \n Em ordem crescente ficara: %d,%d,%d.",n3,n1,n2):
    n2 > n1 && n2 > n3 && n3 > n1 ? printf(" \n Em ordem crescente ficara: %d,%d,%d.",n1,n3,n2):
    n1 < n3 && n2 < n3 && n1 < n2 ? printf(" \n Em ordem crescente ficara: %d,%d,%d.",n1,n2,n3):
    n3 > n1 && n3 > n2 && n1 > n2 ? printf(" \n Em ordem crescente ficara: %d,%d,%d.",n2,n1,n3): 0;

    system(" pause > null ");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
