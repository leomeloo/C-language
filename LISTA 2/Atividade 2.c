#include <stdio.h>
#include <stdlib.h>

/* 2- Elabore um programa que leia o salario bruto, a idade e o sexo de um funcionario.
    Verificar, calcular o aumento e exibir o valor a ser pago da assistencia médica.*/

int main()
{
    float salB, idade, medica;
    char sexo;

    printf("           PROGRAMA 2");
    printf("\n_________________________________");

    printf("\n\n Informe o sexo do funcionario, digite M para masculino ou F para feminino: ");
    scanf("%c",&sexo);
    fflush(stdin);
    printf("\n Digite o valor do salario bruto: ");
    scanf("%f",&salB);
    printf("\n Digite a idade: ");
    scanf("%f",&idade);
    // controle para homens
    if (sexo == 'm' || sexo == 'M'){
        if(idade <= 20){
            medica = (salB*5)/100;
            printf("\n O funcionario pagara R$%.2f de assistencia medica.",medica);
        }
        else if(idade >= 21 && idade < 40){
            medica = (salB*7)/100;
            printf("\n O funcionario pagara R$%.2f de assistencia medica.",medica);
        }
        else if(idade > 40){
            medica = (salB*10)/100;
            printf("\n O funcionario pagara R$%.2f de assistencia medica.",medica);
        }
    }
    // controle para mulheres
    else if(sexo == 'f' || sexo == 'F'){
        if(idade <= 20){
            medica = (salB*2)/100;
            printf("\n A funcionaria pagara R$%.2f de assistencia medica.",medica);
        }
        else if(idade >= 21 && idade < 40){
            medica = (salB*5)/100;
            printf("\n A funcionaria pagara R$%.2f de assistencia medica.",medica);
        }
        else if(idade > 40){
            medica = (salB*7)/100;
            printf("\n A funcionaria pagara R$%.2f de assistencia medica.",medica);
        }
    }
    else{
        printf("\n Sexo invalido, tente novamente.");
    }
        system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
