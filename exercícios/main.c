#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declaração de variáveis
    char nome[20];

    //define idioma nativo do computador
    setlocale(LC_ALL, "");

    //Saudação simples
    printf("Digite seu nome:\n");
    scanf("%s", &nome);
    printf("Saudações, %s!\nComo posso atendê-lo hoje?", nome);
    getch();
    return 0;
}
