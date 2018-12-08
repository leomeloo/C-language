#include <stdio.h>
#include <stdlib.h>

/* 1- Ler a altura e a idade de 11 jogadores e mostrar os dados:
    a)Jogadores com altura maior que 1,80cm.
    b)Jogadores com 25 anos ou mais.
    c)Jogadores com altura abaixo de 1,80 e idade inferior a 18 anos.
    d)A média de idade dos jogadores */

int main ()
{
    float altura, mediaidade, acum = 0;
    int idade, jogadores, cont_a = 0, cont_b = 0, cont_c = 0;

    for (jogadores = 1; jogadores <= 11; jogadores++)
    {
        system(" cls ");

        printf (" Digite a altura do jogador: ");
        scanf ("%f",&altura);
        printf (" Digite a idade do jogador: ");
        scanf ("%d",&idade);

        if ( altura > 1.80)
            cont_a++;
        if ( idade >= 25)
                cont_b++;
        else if ( altura < 1.80 && idade < 18)
                 cont_c++;

        acum = acum + idade;
    }
    mediaidade = acum/11;

    printf (" \n\n %d jogadores tem altura maior que 1.80. ", cont_a);
    printf (" \n %d jogadores tem 25 anos ou mais. ", cont_b);
    printf (" \n %d jogadores tem a altura menor ou igual a 1.80 e nao fez 18 anos ainda. ", cont_c);
    printf (" \n A media de idade dos jogadores e de %.1fanos. ", mediaidade);

    system (" pause > null ");
}
