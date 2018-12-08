#include <stdio.h>
#include <stdlib.h>

// 4- Mostrar na tela o salario bruto, a comissão, o desconto de INSS e o salario líquido do vendedor.
int main()
{
    float bruto, comissoes, vendas, liquido, inss;

    printf("           PROGRAMA 4");
    printf(" \n_________________________________ ");

    printf("\n\n  Qual o salario do vendedor? ");
    scanf("%f",&bruto);
    printf("\n  Qual o total de vendas em R$ deste vendedor? ");
    scanf("%f",&vendas);
    // calculando comissao
    if (vendas < 500)
        comissoes  = (bruto*2)/100;
    else if (vendas > 500 && vendas <= 5000)
            comissoes = (bruto*5)/100;
    else if (vendas > 5000 && vendas <= 25000)
                comissoes = (bruto*10)/100;
    else if (vendas > 25000)
                    comissoes = (bruto*15)/100;
    // calculando INSS
    if (bruto <= 1693.72)
        inss = (bruto * 8)/100;
    else if (bruto > 1693.72 && bruto <= 2822.90)
            inss = (bruto * 9)/100;
    else if (bruto > 2822.90 && bruto < 5645.80)
                inss = (bruto * 11)/100;
    else
        inss = 0; //não há dados de desconto para salarios acima de 5645.80.


    liquido = bruto + comissoes - inss;

    printf( "\n\n O salario bruto do vendedor e de R$%.2f.",bruto);
    printf( "\n A comissao e de R$%.2f.",comissoes);
    printf( "\n O desconto sobre o INSS e de R$%.2f.",inss);
    printf( "\n\n Salario liquido: R$%.2f.",liquido);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
