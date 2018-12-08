#include <stdio.h>
#include <stdlib.h>

//Atividade 1

int main()
{
	int alunos, contAlunos = 0, contA = 0, contB = 0, contC = 0, contD = 0;
	float linguagemC, Java, PHP;

	printf(" \t Digite a quantidade de alunos: ");
	scanf("%d", &alunos);

	while(contAlunos < alunos)
	{
		system(" cls ");

		do
		{
			printf(" \n Digite a nota da prova em Linguagem C: ");
			scanf("%f", &linguagemC);
			printf(" \n Digite a nota da prova em Linguagem Java: ");
			scanf("%f", &Java);
			printf(" \n Digite a nota da prova em Linguagem PHP: ");
			scanf("%f", &PHP);
		}
		while(linguagemC < 0 || Java < 0 || PHP < 0);

		if(linguagemC >= 5 && Java < 6 && PHP < 7)
			contA++;

		if(linguagemC >= 5 && Java >= 6 && PHP < 7)
			contB++;

		if(linguagemC >=5 && Java >= 6 && PHP >= 7)
			contC++;

		if(linguagemC < 5 && Java < 6 && PHP < 7)
			contD++;

		contAlunos++;
	}

	printf(" \n %d Aluno(s) satisfaz(em) a condicao A e nao satisfaz(em) as condicoes B/C. ", contA);
	printf(" \n %d Aluno(s) satisfaz(em) as condicoes A/B e nao satisfaz(em) a condicao C. ", contB);
	printf(" \n %d Aluno(s) satisfaz(em) todas as condicoes.", contC);
	printf(" \n %d Aluno(s) nao satisfaz(em) nenhuma das condicoes.\n\n\n ", contD);

	system(" pause ");
}
    /*Leonardo Melo
    RA: 3287.2411.5834
    Sistemas de Informação 2ºS*/
