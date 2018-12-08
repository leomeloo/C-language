#include <stdio.h>
#include <stdlib.h>

/*8 - Dado o nome, o salário bruto, o desconto de 8,5 % de INSS
 e a comissão de 5% sobre o total de vendas efetuadas durante o mês,
 calcular o salário líquido de 2 vendedores de uma empresa. Ao final,
 mostrar na tela o nome e o salário líquido de cada vendedor.*/

int main()
{
    float sal1, sal2, liq1, liq2, vendas, vendas2;
    char nom1[20], nom2[20];

    printf("           PROGRAMA 8");
    printf("\n_________________________________");
    printf("\n\nQual o nome do primeiro trabalhador? ");
    scanf("%20s",&nom1);
    printf("Valor do salario bruto de %s? ",nom1);
    scanf("%f",&sal1);
    printf("Valor das vendas de %s? ",nom1);
    scanf("%f",&vendas);

    liq1 = (sal1 - 0.085 * sal1) + 0.05 * vendas;

    printf("\nO salario liquido de %s e de R$%.2f.",nom1,liq1);


    printf("\n\nQual o nome do segundo trabalhador? ");
    scanf("%20s",&nom2);
    printf("Valor do salario bruto de %s? ",nom2);
    scanf("%f",&sal2);
    printf("Valor das vendas de %s? ",nom2);
    scanf("%f",&vendas2);

    liq2 = (sal2 - 0.085 * sal2) + 0.05 * vendas2;

    printf("\nO salario liquido de %s e de R$%.2f.",nom2,liq2);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
