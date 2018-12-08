#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Ler o codigo , o sexo e o numero de horas/aula dadas mensalmente por 10 professores.
Cada hora vale R$40 e o desconto é de 8,5%. Calcular media do liquido masculino e a media do bruto feminino.*/

int main()
{
    float horas, salbruto, salliquido, inss, medialiquido, mediabruto, acumm = 0, acumf = 0;
    int codigo, professores, contm = 0, contf = 0;
    char sexo;

    for (professores = 1; professores <= 4; professores++)
    {
        system(" cls ");
        printf(" Digite o codigo do professor: ");
        scanf("%d", &codigo);
        printf(" Digite M para masculino e F para feminino: ");
        fflush(stdin);
        scanf("%c", &sexo);
        sexo = toupper(sexo);
        printf(" Digite o numero de horas/aula dadas mensalmente: ");
        scanf("%f", &horas);

        salbruto = horas * 40;
        inss = (8.5/100) * salbruto;
        salliquido = salbruto - inss;

        if ( sexo == 'M')
        {
            contm++;
            acumm = acumm + salliquido;
        }
        else
        {
            contf++;
            acumf = acumf + salbruto;
        }
        printf(" \n O professor com o codigo %d, tem o salario bruto de R$%.2f e o salario liquido de R$%.2f.\n\n ", codigo, salbruto, salliquido);
        system("  pause ");
    }
    mediabruto = acumf / contf;
    medialiquido = acumm / contm;

    printf(" \n\n A media do salario liquido dos professores e de R$%.2f. ", medialiquido);
    printf(" \n A media do salario bruto das professoras e de R$%.2f. ", mediabruto);

    system(" pause > null ");
}
