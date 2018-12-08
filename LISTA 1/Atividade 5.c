#include <stdio.h>
#include <stdlib.h>

/*5 - Dado o número de eleitores de um município, o número de votos do primeiro candidato,
do segundo candidato, dos votos nulos e dos votos brancos,
calcular os resultados finais em porcentagem e mostrar os resultados na tela do computador.*/

int main()
{
    float eleitores, voto1, voto2, nulo, branco, por1, por2, por3, por4;

    printf("           PROGRAMA 5");
    printf("\n_________________________________");
    printf("\n\nQuantos eleitores ha no municipio? ");
    scanf("%f",&eleitores);
    printf("Quantos votos foram para o primeiro candidato? ");
    scanf("%f",&voto1);
    printf("Quantos votos foram para o segundo candidato? ");
    scanf("%f",&voto2);
    printf("Quantos foram nulos? ");
    scanf("%f",&nulo);
    printf("Quantos foram brancos? ");
    scanf("%f",&branco);

    por1 = voto1*100 /eleitores;
    por2 = voto2*100 /eleitores;
    por3 = nulo*100 /eleitores;
    por4 = branco*100 /eleitores;

    printf("\n\nO primeiro candidato tem %.0f%% dos votos e o segundo candidato tem %.0f%%.",por1,por2);
    printf("\n%.0f%% dos votos foram nulos e %.0f%% foram de votos brancos.",por3,por4);

    system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
