#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//Ler a altura e o sexo de 15 pessoas e mostrar as informaçoes abaixo:
//a) a maior e a menor altura
//b) a média de altura das mulheres e a dos homens.
//c) a quantodade de homens e mulheres em porcentagem.

int main()
{
	char sexo;
	float altura, maior = 0, menor = 4, acumm = 0,acumf = 0, mediam, mediaf, porcm, porcf;
	int pessoas, contm = 0, contf = 0;

	for ( pessoas = 1; pessoas <= 15; pessoas++)
	{
		system(" cls ");
		printf(" Digite a altura da pessoa: ");
		scanf("%f",&altura);
		printf(" \n Digite F para feminino ou M para masculino: ");
		fflush(stdin);
		scanf("%c",&sexo);
		sexo = tolower(sexo);

            if ( altura > maior )
            maior = altura;

            if ( altura < menor )
			menor = altura;

            if ( sexo == 'f')
            {
                acumf = acumf + altura;
                contf++;
            }
            else if ( sexo == 'm' )
            {
                acumm = acumm + altura;
                contm++;
            }
            else if ( sexo != 'm' || sexo != 'f')
            {
                printf(" sexo invalido, digite F ou M. ");
                system(" pause ");
            }

	}

		if( contf > 0)
			mediaf = acumf / contf;

		if( contm > 0)
			mediam = acumm / contm;

        porcf = (contf * 100) / 15;
        porcm = (contm * 100) / 15;

		printf(" \n\n A maior altura do grupo e de %.2fcm e a menor e de %.2fcm. ", maior, menor);
		printf(" \n\n A media de altura de mulheres e de %.2fcm e a de homens e de %.2fcm. ", mediaf, mediam);
		printf(" \n\n A porcentagem de homens e de %.0f%% e a de mulheres e de %.0f%%. ", porcm, porcf);

		system(" pause > null ");
}

