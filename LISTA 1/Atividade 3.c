#include <stdio.h>
#include <stdlib.h>

/*3-Dado o número de motos e o número de carros num estacionamento, calcular e mostrar na tela a quantidade de:
a) pneus de motos;
b) pneus de carros;
c) pneus;
d) veículos. */

int main()
{
    int car, mot, veic, pneusm, pneusc, pneus;

    printf("           PROGRAMA 3");
    printf("\n_________________________________");
    printf("\n\nQuantos carros ha no estacionamento? ");
    scanf("%d",&car);
    printf("Quantas motos ha no estacionamento? ");
    scanf("%d",&mot);

    pneusc= car * 4;
    pneusm= mot * 2;
    veic = car + mot;
    pneus= pneusc + pneusm;

    printf("\nNo estacionamento ha %d veiculos e %d pneus. %d pneus sao de carros e %d sao de motos.",veic,pneus,pneusc,pneusm);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
