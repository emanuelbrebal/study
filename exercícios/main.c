#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declara��o de vari�veis
    char nome[20];

    //define idioma nativo do computador
    setlocale(LC_ALL, "");

    //Sauda��o simples
    printf("Digite seu nome:\n");
    scanf("%s", &nome);
    printf("Sauda��es, %s!\nComo posso atend�-lo hoje?", nome);
    getch();
    return 0;
}
