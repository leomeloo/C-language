#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

// 3- Desenvolver um programa para verificar as caracteristicas dos animais utilizando menus e submenus.

int main()
{
    int opcao, tipo, animal;

    do
    {
        system ("cls");//clean screen

        printf(" \n\n Tipos de animais: ");
        printf(" \n [1] Mamiferos ");
        printf(" \n [2] Aves ");
        printf(" \n [3] Repteis ");
        printf(" \n [0] Sair ");

        printf(" \n\n Para mais informacoes, digite uma das opcoes acima: ");
        scanf("%d",&opcao);

        switch (opcao)
        {
            case 1 : //MAMIFEROS
                do
                {
                    system ("cls");
                    printf(" \n\t MAMIFEROS ");
                    printf(" \n [1] Quadrupedes ");
                    printf(" \n [2] Bipedes ");
                    printf(" \n [3] Voador ");
                    printf(" \n [4] Aquatico ");
                    printf(" \n [0] Voltar ");

                    printf(" \n\n Digite 1 ou 2 para ver os tipos. 3 ou 4 para ver a especie: ");
                    scanf("%d",&tipo);

                    switch (tipo)
                    {
                        case 1://QUADRUPEDES
                            do
                            {
                                system ("cls");
                                printf(" \n\t QUADRUPEDES: ");
                                printf(" \n [1] Carnivoro ");
                                printf(" \n [2] Herbivoro ");
                                printf(" \n [0] Voltar");
                                printf(" \n\n Digite uma das opcoes para ver o nome da especie: ");
                                scanf("%d",&animal);

                                switch (animal)
                                {
                                    case 1 :
                                        printf(" Carnivoro: Leao.\n\n ");
                                        break;
                                    case 2 :
                                        printf(" Herbivoro: Cavalo.\n\n ");
                                        break;
                                    case 0:
                                        break;
                                    default :
                                        printf(" Opcao invalida.\n\n ");
                                        break;
                                }
                                system("pause > null");
                            }
                            while (animal != 0);
                            break;
                        case 2://BIPEDES
                            do
                            {
                                system ("cls");
                                printf(" \n\t BIPEDES: ");
                                printf(" \n [1] Onivoro ");
                                printf(" \n [2] Frutifero ");
                                printf(" \n [0] Voltar");
                                printf(" \n\n Digite uma das opcoes para ver o nome da especie: ");
                                scanf("%d",&animal);

                                switch (animal)
                                {
                                    case 1 :
                                        printf(" Onivoro: Homem.\n\n ");
                                        break;
                                    case 2 :
                                        printf(" Frutifero: Macaco.\n\n ");
                                        break;
                                    case 0:
                                        break;
                                    default :
                                        printf(" Opcao invalida.\n\n ");
                                        break;
                                }
                                system("pause > null");
                            }
                            while (animal != 0);
                            break;

                        case 3:
                            printf(" Voador: Morcego \n\n ");
                            break;
                        case 4:
                            printf(" Aquatico: Baleia \n\n ");
                            break;
                        case 0:
                            break;
                        default:
                            printf(" opcao invalida ");
                            break;
                    }
                    system("pause > null");
                }
                while (tipo != 0);
                break;

            case 2://AVES
                do
                {
                    system ("cls");
                    printf(" \n\t AVES ");
                    printf(" \n [1] Nao voadoras ");
                    printf(" \n [2] Nadadora ");
                    printf(" \n [3] De rapina ");
                    printf(" \n [0] Voltar ");
                    printf(" \n\n Digite 1 para ver os tipos , 2 ou 3 para ver a especie: ");
                    scanf("%d",&tipo);

                    switch (tipo)
                    {
                        case 1://NAO VOADORAS
                            do
                            {
                                system ("cls");
                                printf(" \n\t NAO VOADORAS: ");
                                printf(" \n [1] Tropical ");
                                printf(" \n [2] Polar ");
                                printf(" \n [0] Voltar");
                                printf(" \n\n Digite uma das opcoes para ver o nome da especie: ");
                                scanf("%d",&animal);

                                switch (animal)
                                {
                                    case 1 :
                                        printf(" Tropical: Avestruz.\n\n ");
                                        break;
                                    case 2 :
                                        printf(" Polar: Pinguim.\n\n ");
                                        break;
                                    case 0:
                                        break;
                                    default :
                                        printf(" Opcao invalida.\n\n ");
                                        break;
                                }
                                system("pause > null");
                            }
                            while (animal != 0);
                            break;

                        case 2:
                            printf("  Nadador: Pato \n\n ");
                            break;
                        case 3:
                            printf("  De rapina: Aguia \n\n ");
                            break;
                        case 0:
                            break;
                        default:
                            printf(" Opcao invalida ");
                            break;
                    }
                    system("pause > null");
                }
                while (tipo != 0);
                break;

            case 3://REPTEIS
                do
                {
                    system ("cls");
                    printf(" \n\t REPTEIS ");
                    printf(" \n [1] Com casco ");
                    printf(" \n [2] Carnivoro ");
                    printf(" \n [3] Sem patas ");
                    printf(" \n [0] Voltar");
                    printf(" \n\n Digite uma das opcoes para ver o nome da especie: ");
                    scanf("%d",&tipo);

                    switch (tipo)
                    {
                        case 1:
                            printf(" Com casco: Tartaruga \n\n ");
                            break;
                        case 2:
                            printf(" Carnivoro: Crocodilo \n\n ");
                            break;
                        case 3:
                            printf(" Sem patas: Cobra \n\n ");
                            break;
                        case 0:
                            break;
                        default:
                            printf(" Opcao invalida \n\n ");
                    }
                    system(" pause > null ");
                }
                while (tipo != 0);
        }
        system ("pause > null");
    }
    while (opcao != 0);
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
