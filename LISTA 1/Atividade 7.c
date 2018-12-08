#include <stdio.h>
#include <stdlib.h>

    /*7 - Sabendo-se que dois alunos realizaram duas avaliações cada,
     com peso 6 para a primeira avaliação e peso 4 para a segunda avaliação,
     calcule a média ponderada de cada aluno. Ao final, calcule média aritmética entre
     os dois alunos com base nos resultados da média ponderada e mostre na tela os
     resultados da média ponderada e da média aritmética.*/

     int main()
{
        printf("           PROGRAMA 7");
        printf("\n_________________________________");
        printf("\n\n*PS: O peso da primeira prova e 6 e da segunda e 4.*");

        float ava1, ava2, ava3, ava4, medp1, meds1, medp2, meds2;


        printf("\n\nQual foi a nota do aluno 1 na primeira prova? ");
        scanf("%f",&ava1);
        printf("Qual foi a nota dele na segunda prova? ");
        scanf("%f",&ava2);

        medp1 = (6*ava1 + 4*ava2) /10;
        meds1 = (ava1+ava2) /2;

        printf("\nA media ponderada do primeiro aluno foi de %.1f pontos e a media aritmetica foi de %.1f pontos.",medp1,meds1);

        printf("\n\nQual foi a nota do aluno 2 na primeira prova? ");
        scanf("%f",&ava3);
        printf("Qual foi a nota dele na segunda prova? ");
        scanf("%f",&ava4);

        medp2 = (6*ava3 + 4*ava4) /10;
        meds2 = (ava3+ava4) /2;

        printf("\nA media ponderada do segundo aluno foi de %.1f pontos e a media aritmetica foi de %.1f pontos.",medp2,meds2);

        system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
