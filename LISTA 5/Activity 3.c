#include <stdio.h>
#include <stdlib.h>

/* 3- Elaborar um menu para simular uma eleição para presidente.
    Após todos eleitores terem votado, apresentar na tela a porcentagem de votos e a classificação geral.*/

int main()
{
    int opcao, cont1 = 0, cont2 = 0, cont3 = 0, contB = 0, contN = 0, cont_eleitores = 0;
    float porc1, porc2, porc3, porc4, porc5, porcB, porcN;

    do
    {
        system("cls");
        printf(" \t *Eleicoes para presidente* \n ");

        printf(" [1] Bolsonaro \n ");
        printf(" [2] Amoedo \n ");
        printf(" [3] B.Obama \n ");
        printf(" [4] Branco \n ");
        printf(" [0] Encerrar votos \n ");

        printf(" \n\n Digite o numero de seu candidato: ");
        scanf("%d", &opcao);

        switch(opcao)
        {
            case 1:
                cont1++;
                printf(" \n Voto computado no Bolsonaro. \n\n\n\n ");
                break;
            case 2:
                cont2++;
                printf(" \n Voto computado no Amoedo. \n\n\n\n ");
                break;
            case 3:
                cont3++;
                printf(" \n Voto computado no B.Obama. \n\n\n\n ");
                break;
            case 4:
                contB++;
                printf(" \n Voto em branco computado. \n\n\n\n ");
                break;
            case 0:
                cont_eleitores--;
                printf(" \n Apuracao de votos iniciada... \n\n\n\n ");
                break;
            default:
                contN++;
                printf(" \n Opcao invalida, o voto foi computado como nulo. \n\n\n\n ");
                break;
        }
        cont_eleitores++;
        system(" pause ");
    }
    while(opcao != 0);

    porc1 = (cont1*100)/cont_eleitores;
    porc2 = (cont2*100)/cont_eleitores;
    porc3 = (cont3*100)/cont_eleitores;
    porcB = (contB*100)/cont_eleitores;
    porcN = (contN*100)/cont_eleitores;

    cont1 > cont2 && cont1 > cont3 && cont2 > cont3 ? printf(" \n Resultado:\nBolsonaro %.0f%%\nAmoedo %.0f%%\nB.Obama %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc1,porc2,porc3,porcB,porcN):

    cont1 < cont2 && cont1 < cont3 && cont2 < cont3 ? printf(" \n Resultado:\nB.Obama %.0f%%\nAmoedo %.0f%%\nBolsonaro %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc3,porc2,porc1,porcB,porcN):

    cont2 > cont1 && cont2 > cont3 && cont3 > cont1 ? printf(" \n Resultado:\nAmoedo %.0f%%\nB.Obama %.0f%%\nBolsonaro %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc2,porc3,porc1,porcB,porcN):

    cont2 < cont1 && cont2 < cont3 && cont3 < cont1 ? printf(" \n Resultado:\nBolsonaro %.0f%%\nB.Obama %.0f%%\nAmoedo %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc1,porc3,porc2,porcB,porcN):

    cont3 > cont1 && cont3 > cont2 && cont1 > cont2 ? printf(" \n Resultado:\nB.Obama %.0f%%\nBolsonaro %.0f%%\nAmoedo %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc3,porc1,porc2,porcB,porcN):

    cont3 < cont1 && cont3 < cont2 && cont1 < cont2 ? printf(" \n Resultado:\nAmoedo %.0f%%\nBolsonaro %.0f%%\nB.Obama %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc2,porc1,porc3,porcB,porcN):

    cont1 > cont2 && cont1 > cont3 && cont2 == cont3 ? printf(" \n Resultado:\nBolsonaro %.0f%%\nAmoedo %.0f%%\nB.Obama %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc1,porc2,porc3,porcB,porcN):

    cont1 == cont2 && cont1 < cont3 && cont2 < cont3 ? printf(" \n Resultado:\nB.Obama %.0f%%\nAmoedo %.0f%%\nBolsonaro %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc3,porc2,porc1,porcB,porcN):

    cont2 > cont1 && cont2 > cont3 && cont3 == cont1 ? printf(" \n Resultado:\nAmoedo %.0f%%\nB.Obama %.0f%%\nBolsonaro %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc2,porc3,porc1,porcB,porcN):

    cont1 == cont2 && cont2 == cont3 ? printf(" \n Resultado com empate, necessario segundo turno:\nAmoedo %.0f%%\nB.OBama %.0f%%\nBolsonaro %.0f%%\nBrancos %.0f%%\nNulos %.0f%% \n\n ",porc2,porc3,porc1,porcB,porcN):0;

    system(" pause ");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
