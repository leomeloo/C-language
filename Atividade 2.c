#include <stdio.h>
#include <stdlib.h>

/*2-Dado o saldo anterior de uma conta corrente,
  o valor de dois cheques emitidos e o valor de um depósito,
  calcular o saldo atual e mostrar o resultado na tela.*/

int main()
{
    float saldo, cheque1, cheque2, dep, atual;

    printf("           PROGRAMA 2");
    printf("\n_________________________________");
    printf("\n\nQual o saldo anterior da conta? ");
    scanf("%f",&saldo);
    printf("\nValor do primeiro cheque emitido? ");
    scanf("%f",&cheque1);
    printf("\nValor do segundo cheque emitido? ");
    scanf("%f",&cheque2);
    printf("\nValor do deposito? ");
    scanf("%f",&dep);

    atual = (saldo + dep)-(cheque1 + cheque2);

    printf("\nO saldo atual da conta e R$%.2f.",atual);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
