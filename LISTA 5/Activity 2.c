#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* 2- Ler a idade, sexo e o salario minimo de N pessoas, efetuar os processos abaixo:
    - Total de pessoas, total de homens e o total de mulheres em porcentagem;
    - A porcentagem de crianças (até 12 anos), de adolescentes (entre 13 e 17 anos) e adultos ( acima de 17);
    - A porcentagem de pessoas da classe C (até 4 salarios), da classe B (entre 5 e 20 salarios), classe A(acima de 20 salarios);
    - A media de renda das pessoas;
    Considere:
    -Variavel idade deve ser maior que 0;
    -Variavel sexo deve ser maiuscula;
    -Variavel opcao deve ser minuscula;
    -Perguntar se quer continuar "sim ou nao"; */

 int main()
 {
    int idade, renda, contm = 0, contf = 0, crianca = 0, adolescente = 0, adulto = 0, classec = 0, classeb = 0, classea = 0, pessoas = 0, acum_renda = 0;
    float porc_homens, porc_mulher, porc_crianca, porc_adolescente, porc_adulto, porc_c, porc_b, porc_a, media_renda;
    char sexo, opcao;

    do
    {
        system("cls");

        do
        {
            printf(" \n Digite a idade da pessoa: ");
            scanf("%d", &idade);
        }
        while(idade < 0);

        do
        {
            printf(" \n Digite M para masculino ou F para feminino: ");
            fflush(stdin);
            scanf("%c", &sexo);
            sexo = toupper(sexo);
        }
        while(sexo != 'M' && sexo != 'F');

        printf(" \n Digite o numero de salarios minimos que ela recebe: ");
        scanf("%d", &renda);

        acum_renda = acum_renda + renda;

        if(sexo == 'M')
            contm++;
        else
            contf++;

        if(idade <= 12)
            crianca++;
        else
            if(idade > 12 && idade <= 17)
                adolescente++;
        else
            if(idade > 17)
                adulto++;

        if(renda <= 4)
            classec++;
        else
            if(renda > 4 && renda <= 20)
                classeb++;
        else
            if(renda > 20)
                classea++;

        pessoas++;

        do
        {
            printf(" \n Digite S para continuar ou N para sair: ");
            fflush(stdin);
            scanf("%c", &opcao);
            opcao = tolower(opcao);
        }
        while(opcao != 's' && opcao != 'n');

        printf(" \n ");

    }
    while(opcao != 'n');

    porc_homens = (contm * 100)/pessoas;
    porc_mulher = (contf * 100)/pessoas;
    porc_crianca = (crianca * 100)/pessoas;
    porc_adolescente = (adolescente * 100)/pessoas;
    porc_adulto = (adulto * 100)/pessoas;
    porc_a = (classea * 100)/pessoas;
    porc_b = (classeb * 100)/pessoas;
    porc_c = (classec * 100)/pessoas;
    media_renda = acum_renda/pessoas;

    printf(" \n Quantidade de pessoas: %d. ", pessoas);
    printf(" \n Porcentagem de homens: %.2f%%. ", porc_homens);
    printf(" \n Porcentagem de mulheres: %.2f%%. ", porc_mulher);
    printf(" \n Porcentagem de criancas: %.2f%%. ", porc_crianca);
    printf(" \n Porcentagem de adolescentes: %.2f%%. ", porc_adolescente);
    printf(" \n Porcentagem de adultos: %.2f%%. ", porc_adulto);
    printf(" \n Porcentagem de pessoas na classe A: %.2f%%. ", porc_a);
    printf(" \n Porcentagem de pessoas na classe B: %.2f%%. ", porc_b);
    printf(" \n Porcentagem de pessoas na classe C: %.2f%%. ", porc_c);
    printf(" \n A media de renda das pessoas e de %.0f salarios minimos.\n\n ", media_renda);

    system(" pause ");
}

    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
