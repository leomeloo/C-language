#include <stdio.h>
#include <stdlib.h>

/* 3- Se o aviador apresentar todas as condiçoes solicitadas,
    mostrar na tela a mensagem "candidato satisfatorio",
    caso contrario, mostrar na tela "candidato insatisfatorio"*/
int main()
{
    float altura, idade, horas, peso;

    printf("           PROGRAMA 3");
    printf(" \n_________________________________ ");

    printf(" \n\n Digite a altura do aviador: ");
    scanf("%f",&altura);
    printf(" \n Digite a idade do aviador: ");
    scanf("%f",&idade);
    printf(" \n Quantas horas de voo o aviador tem? ");
    scanf("%f",&horas);
    printf(" \n Digite o peso do aviador: ");
    scanf("%f",&peso);

    if (altura >= 1.75 && idade >= 22 && idade <= 40 && horas > 1600 && peso >= 65 && peso <= 95)//condiçoes solicitadas
        printf(" \n\n Candidato satisfatorio. ");
    else
        printf(" \n\n Candidato insatisfatorio. ");

    system(" pause > null ");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
