#include <stdio.h>
#include <stdlib.h>

/*4 - Calcular a área das figuras geométricas, conforme as fórmulas indicadas abaixo e mostrar os resultados na tela do computador:
a) Triângulo = (base x altura) / 2;
b) Quadrado = lado x lado;
c) Retângulo = base x altura;
d) Losango = (diagonalmaior x diagonalmenor) / 2.*/

int main()
{
    int triagulo, quadrado, retangulo, losango, base, altura, base2, altura2, lado, diagma, diagme;

    printf("           PROGRAMA 4");
    printf("\n_________________________________");
    printf("\n\n\nDigite a altura do triangulo: ");
    scanf("%d",&altura);
    printf("Agora digite o tamanho de sua base: ");
    scanf("%d",&base);
    triagulo = (base * altura)/2;
    printf("A area de seu triangulo e de %d.",triagulo);

    printf("\n\nDigite o tamanho dos lados do quadrado: ");
    scanf("%d",&lado);
    quadrado = (lado * lado);
    printf("A area de seu quadrado e de %d.",quadrado);

    printf("\n\nDigite a altura do retangulo: ");
    scanf("%d",&altura2);
    printf("Agora digite o tamanho de sua base: ");
    scanf("%d",&base2);
    retangulo = (base2 * altura2);
    printf("A area de seu retangulo e de %d.",retangulo);

    printf("\n\nDigite o tamanho da diagonal maior do losango: ");
    scanf("%d",&diagma);
    printf("Digite o tamanho da diagonal menor do losango: ");
    scanf("%d",&diagme);
    losango = (diagma * diagme)/2;
    printf("A area de seu losango e de %d.",losango);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
