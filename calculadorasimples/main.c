#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declara��o de vari�veis
    float n1, n2;

    //define idioma local do computador
    setlocale(LC_ALL, "");

    //Usu�rio define dois n�meros, N�O ESQUECER DO & NO SCANF
    printf("Digite um n�mero:\n");
    scanf("%f", &n1);
    printf("Digite um n�mero:\n");
    scanf("%f", &n2);

    //exibindo resultado das opera��es b�sicas
    //soma
    printf("Resultado da soma entre %.1f e %.1f : %.2f.\n", n1, n2, n1+n2);
    //diferen�a
    printf("Resultado da diferen�a entre %.1f e %.1f : %.2f.\n", n1, n2, n1-n2);
    //produto
    printf("Resultado do produto entre %.1f e %.1f : %.2f.\n", n1, n2, n1*n2);
    //raz�o
    printf("Resultado da raz�o entre %.0f e %.1f : %.2f.\n", n1, n2, n1/n2);
    //recebe qualquer entrada para encerrar o programa
    getch();

    return 0;
}
