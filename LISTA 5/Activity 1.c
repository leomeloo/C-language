#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*  1- Ler a idade, o peso e o sexo de N alunos e mostrar:
    -Media de pesos dos homens;
    -Quantidade de homens com mais de 80kg;
    -Media de idades das mulheres;
    -Quantidade de mulheres acima de 25 anos;

    Consistencias:
    -Idade e peso deve ser maior que 0;
    -Variavel sexo deve receber letra minuscula;
    -Digite a quantidade de pessoas;
    */
int main()
{
    int pessoas, idade, contm = 0, contf = 0, cont_peso = 0, cont_idade = 0, acum_idade = 0, cont_pessoas = 0;
    float peso, acum_peso = 0, media_idade = 0, media_peso = 0;
    char sexo;

    printf(" \t Digite a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    do
    {
        system("cls");
        do
        {
            printf(" \n Digite a idade: ");
            scanf("%d", &idade);
            printf(" \n Digite o peso: ");
            scanf("%f", &peso);
        }
        while(idade < 0 && peso < 0);

        do
        {
            printf(" \n Digite o sexo: ");
            fflush(stdin);
            scanf("%c", &sexo);
            sexo = tolower(sexo);
        }
        while(sexo != 'm' && sexo != 'f');

        if(sexo == 'm')
        {
            contm++;
            acum_peso = acum_peso + peso;

            if(peso > 80)
                cont_peso++;
        }
        if(sexo == 'f')
        {
            contf++;
            acum_idade = acum_idade + idade;

            if(idade > 25)
                cont_idade++;
        }
        cont_pessoas++;
    }
    while(pessoas > cont_pessoas);
    media_idade = acum_idade/contf;
    media_peso = acum_peso/contm;

    printf(" \n A media de peso dos homens e de %.0fKg.", media_peso);
    printf(" \n Ha %d homen(s) com o peso acima de 80kg.", cont_peso);
    printf(" \n A media de idade das mulheres e de %.0f anos.", media_idade);
    printf(" \n Ha %d mulher(s) com mais de 25 anos.", cont_idade);
    system(" pause ");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
