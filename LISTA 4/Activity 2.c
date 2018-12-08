 #include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
    int numero,contador = 0;
    char opcao;

    do
    {
        system(" cls ");
        printf(" \t\t TABUADA ");
        printf("\n\t [*] Multiplicacao ");
        printf("  \n\t [+] Adicao ");
        printf("  \n\t [S] Sair");

        printf(" \n\n\t Digite sua opcao: ");
        fflush(stdin);
        scanf("%c", &opcao);
        opcao = toupper(opcao);

        switch(opcao)
        {
            case '*':
                printf(" Escolha o numero desejado: ");
                scanf("%d", &numero);
                for (contador = 1; contador <= 10; contador++)
                {
                    printf("%d x %d = %d \n", numero, contador, numero*contador);
                }
                break;
            case '+':
                printf(" Escolha o numero desejado: ");
                scanf("%d", &numero);
                for (contador = 1; contador <= 10; contador++)
                {
                    printf("%d + %d = %d \n", numero, contador, numero+contador);
                }
                break;
            case 'S':
                printf(" \n\nEncerrando tabuada... Ate a proxima!\n\n ");
                break;
            default:
                printf(" Opcao invalida... ");
                break;
        }
        system(" pause > null ");
    }
    while (opcao != 'S');
}
