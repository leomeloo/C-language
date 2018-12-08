#include <stdio.h>
#include <stdlib.h>

/* 1- Dado o sexo e a altura de uma pessoa, calcular o peso ideal e mostrar o resultado na tela, conforme as formulas abaixo:
    a)para homens, utilize a formula: (72.7*altura)-58.
    b)para mulheres, utilize a formula:(62.1*altura)-44.7.*/

int main ()
{
	float alt, peso_ideal;
	char sexo;

    printf("           PROGRAMA 1");
    printf("\n_________________________________");

	printf("\n\n Digite a altura: ");
	scanf("%f",&alt);
	printf("\n Digite o sexo: ");
	scanf("%s",&sexo);

	if (sexo == 'm' || sexo == 'M'){
			peso_ideal = (72.7*alt)-58;
			printf("\n Peso ideal: %2.1fkg",peso_ideal);
		}
	else
		if (sexo == 'f' || sexo == 'F'){
			peso_ideal=(62.1*alt)-44.7;
			printf("\n Peso ideal: %2.1fkg",peso_ideal);
		}
	system("pause > null");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
