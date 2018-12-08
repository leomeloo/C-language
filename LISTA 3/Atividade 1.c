#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// 1- Elaborar um menu com 4 opções aritméticas.

int main()
{
    char opcao;
    float n1, n2;

    do
    {
        system ("cls");//clean screen

        printf(" \n\n Opcoes aritmeticas disponiveis: ");
        printf(" \n [+] Adicao ");
        printf(" \n [-] Subtracao ");
        printf(" \n [*] Multiplicacao ");
        printf(" \n [/] Divisao ");
        printf(" \n [S] Sair ");

        printf(" \n\n Digite o operador de sua escolha: ");
        scanf("%c",&opcao);

        switch (opcao)
        {
            case '+' :
                printf(" \n Digite 2 numeros a serem somados: \n");
                scanf("%f%f",&n1,&n2);
                printf(" \n %.1f + %.1f = %.1f ",n1,n2,n1+n2);
                break;
            case '-' :
                printf(" \n Digite 2 numeros a serem subtraidos: \n");
                scanf("%f%f",&n1,&n2);
                printf(" \n %.1f - %.1f = %.1f ",n1,n2,n1-n2);
                break;
            case '*' :
                printf(" \n Digite 2 numeros a serem multiplicados: \n");
                scanf("%f \n %f",&n1,&n2);
                printf(" \n %.1f x %.1f = %.1f ",n1,n2,n1*n2);
                break;
            case '/':
                printf(" \n Digite 2 numeros a serem divididos: \n");
                scanf("%f%f",&n1,&n2);
                if (n2 != 0)
                    printf(" \n %.1f / %.1f = %.1f ",n1,n2,n1/n2);
                else
                    printf(" \n Nao existe divisao por 0, tente de novo. ");
                    break;
            case 'S':
                printf(" Fim ");
                break;
            case 's':
                printf(" Fim ");
                break;
            default:
                printf(" Opcao invalida. ");
                break;
            }
        system ("pause > null");
    }
    while (toupper(opcao) != 'S');
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
