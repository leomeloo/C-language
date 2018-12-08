#include <stdio.h>
#include <stdlib.h>

//Atividade 2

int main()
{
    float salarioAtual, salarioNovo, ajuste, contB = 0, contD = 0, acumA = 0, acumC = 0, mediaE, acumE = 0, contE = 0, maior = 0;
    char opcao = 'S';

    while(opcao != 'N')
    {
        system(" cls ");

        do
        {
            printf(" \n Digite o salario atual do funcionario: ");
            scanf("%f", &salarioAtual);
        }
        while(salarioAtual < 0);

        if(salarioAtual <= 1000)
            ajuste = (3.5 / 100) * salarioAtual;

        else
            if(salarioAtual > 1000 && salarioAtual <= 2500)
            {
                ajuste = (3 / 100) * salarioAtual;
                contB++;
            }

        else
            if(salarioAtual > 2500 && salarioAtual <= 5000)
                ajuste = (2.5 / 100) * salarioAtual;

        else
            if(salarioAtual > 5000)
                ajuste = (1 / 100) * salarioAtual;

        salarioNovo = salarioAtual + ajuste;
        acumA = acumA + salarioNovo;

        if(salarioNovo > 5000)
            acumC = acumC + salarioNovo;

        else
            if(salarioNovo > 2500 && salarioNovo <= 5000)
                contD++;

        else
            if(salarioNovo < 1000)
            {
                contE++;
                acumE = acumE + salarioNovo;
            }

        if(salarioNovo > maior)
            maior = salarioNovo;

        do
        {
            printf(" \n\n Digite S para continuar ou N para sair: ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = toupper(opcao);
        }
        while (opcao != 'S' && opcao != 'N');
    }
    mediaE = acumE / contE;

    printf(" \n\n O total de todos os salarios, apos o aumento e de R$%.2f. ", acumA);
    printf(" \n %.0f funcionario(s) ganha(m) salario(s) entre R$1.001,00 e R$2.000,00, antes do aumento dado pela empresa. ", contB);
    printf(" \n O total geral de salarios dos funcionarios que ganham acima de R$5.000,00 e de R$%.2f. ", acumC);
    printf(" \n %.0f funcionario(s) ganharam um aumento entre R$2.501,00 e R$5.000,00 ", contD);
    printf(" \n A media de salarios dos funcionarios que ganham abaixo de R$1.000,00 e de R$%.2f", mediaE);
    printf(" \n O maior salario de todos apos o reajuste, e de R$%.2f\n\n ", maior);

    system(" pause ");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
