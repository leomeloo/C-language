#include <stdio.h>
#include <stdlib.h>

// 2- Elaborar um calendario.

int main(void)
{
    int op;

    do
    {
        system("cls");//clean screen

        printf(" \t   CALENDARIO 2018 ");
        printf(" \n\t--------------------- ");

        printf(" \n\n  [1] Janeiro \n ");
        printf(" [2] Fevereiro \n ");
        printf(" [3] Marco \n ");
        printf(" [4] Abril \n ");
        printf(" [5] Maio \n ");
        printf(" [6] Junho \n ");
        printf(" [7] Julho \n ");
        printf(" [8] Agosto \n ");
        printf(" [9] Setembro \n ");
        printf(" [10] Outubro \n ");
        printf(" [11] Novembro \n ");
        printf(" [12] Dezembro \n ");
        printf(" [0] Encerrar programa ");

        printf(" \n\n Digite o mes desejado:");
        scanf("%d",&op);

        switch (op)
        {
        case 1:
            printf(" \n -D -S -T -Q -Q -S -S\n -- 01 02 03 04 05 06\n 07 08 09 10 11 12 13\n 14 15 16 17 18 19 20\n 21 22 23 24 25 26 27\n 28 29 30 31");
            printf(" \n\n  ANIVERSARIANTES DE JANEIRO:\n 04> Socorro - 968792359 - socorrom@hotmail.com\n 10> Larissa - 965874123 - larychence@hotmail.com");
            break;
        case 2:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- -- -- 01 02 03\n 04 05 06 07 08 09 10\n 11 12 13 14 15 16 17\n 18 19 20 21 22 23 24\n 25 26 27 28 ");
            printf(" \n\n  ANIVERSARIANTES DE FEVEREIRO:\n 15> Alex - 968792359 - Alexricardo@hotmail.com\n 25> Bruna - 965874123 - Bruna2018@hotmail.com");
            break;
        case 3:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- -- -- 01 02 03\n 04 05 06 07 08 09 10\n 11 12 13 14 15 16 17\n 18 19 20 21 22 23 24\n 25 26 27 28 29 30 31 ");
            printf(" \n\n  ANIVERSARIANTES DE MARCO:\n 15> Leonardo - 968792359 - leomelo@hotmail.com\n 10> Pedro - 965874123 - pedrosantos@hotmail.com");
            break;
        case 4:
            printf(" \n -D -S -T -Q -Q -S -S\n 01 02 03 04 05 06 07\n 08 09 10 11 12 13 14\n 15 16 17 18 19 20 21\n 22 23 24 25 26 27 28\n 29 30 ");
            printf(" \n\n  ANIVERSARIANTES DE ABRIL:\n 07> Vanise - 968792359 - vanise2010@hotmail.com\n 10> Guilherme - 965874123 - guisampaio@hotmail.com");
            break;
        case 5:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- 01 02 03 04 05\n 06 07 08 09 10 11 12\n 13 14 15 16 17 18 19\n 20 21 22 23 24 25 26\n 27 28 29 30 31 ");
            printf(" \n\n  ANIVERSARIANTES DE MAIO:\n 26> Amanda - 968792359 - Fernandesamanda@hotmail.com\n 17> Larissa - 965874123 - larychence@hotmail.com");
            break;
        case 6:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- -- -- -- 01 02\n 03 04 05 06 07 08 09\n 10 11 12 13 14 15 16\n 17 18 19 20 21 22 23\n 24 25 26 27 28 29 30 ");
            printf(" \n\n  ANIVERSARIANTES DE JUNHO:\n 01> Alex - 968792359 - alexricardo@hotmail.com\n 23> Elenildo - 65874123 - Elenildo1972@hotmail.com");
            break;
        case 7:
            printf(" \n -D -S -T -Q -Q -S -S\n 01 02 03 04 05 06 07\n 08 09 10 11 12 13 14\n 15 16 17 18 19 20 21\n 22 23 24 25 26 27 28\n 29 30 31 ");
            printf(" \n\n  ANIVERSARIANTES DE JULHO:\n 12> Jessica - 968792359 - jessica1234@hotmail.com\n 10> Arnaldo - 965874123 - arnaldo878@hotmail.com");
            break;
        case 8:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- -- 01 02 03 04\n 05 06 07 08 09 10 11\n 12 13 14 15 16 17 18\n 19 20 21 22 23 24 25\n 26 27 28 29 30 31 ");
            printf(" \n\n  ANIVERSARIANTES DE AGOSTO:\n 29> Barbara - 968792359 - barbaram@hotmail.com\n 10> Leticia - 965874123 - cervantes@hotmail.com");
            break;
        case 9:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- -- -- -- -- 01\n 02 03 04 05 06 07 08\n 09 10 11 12 13 14 15\n 16 17 18 19 20 21 22\n 23 24 25 26 27 28 29\n 30 ");
            printf(" \n\n  ANIVERSARIANTES DE SETEMBRO:\n 13> Felipe - 968792359 - felipemelo@hotmail.com\n 02> Edson - 965874123 - Edsonmano@hotmail.com");
            break;
        case 10:
            printf(" \n -D -S -T -Q -Q -S -S\n -- 01 02 03 04 05 06\n 07 08 09 10 11 12 13\n 14 15 16 17 18 19 20\n 21 22 23 24 25 26 27\n 28 29 30 31 ");
            printf(" \n\n  ANIVERSARIANTES DE OUTUBRO:\n 01> Jefferson - 968792359 - jeffcarlos@hotmail.com\n 29> Vanubia - 965874123 - biaxzinha@hotmail.com");
            break;
        case 11:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- -- -- 01 02 03\n 04 05 06 07 08 09 10\n 11 12 13 14 15 16 17\n 18 19 20 21 22 23 24\n 25 26 27 28 29 30 ");
            printf(" \n\n  ANIVERSARIANTES DE NOVEMBRO:\n 23> Manuela - 968792359 - manumelo@hotmail.com\n 30> Helen - 965874123 - heleniara@hotmail.com");
            break;
        case 12:
            printf(" \n -D -S -T -Q -Q -S -S\n -- -- -- -- -- -- 01\n 02 03 04 05 06 07 08\n 09 10 11 12 13 14 15\n 16 17 18 19 20 21 22\n 23 24 25 26 27 28 29\n 30 31 ");
            printf(" \n\n  ANIVERSARIANTES DE DEZEMBRO:\n 18> Diego - 968792359 - Diegofrt@hotmail.com\n 28> Josyane - 965874123 - josy1980@hotmail.com");
            break;
        case 0:
            printf(" Fechando programa...\n ");
            break;
        default:
            printf(" \n Mes invalido, digite uma das opcoes acima. ");
            break;
        }
        system("pause > null");
    }
    while (op != 0);
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
