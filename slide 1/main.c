#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{
    //biblioteca para definir caracteres especiais em C setlocale:
    setlocale(LC_ALL, "");
    //praticando

    //nome
    char nome[50];
    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    //altura
    float altura;
    printf("Digite sua altura:\n");
    scanf("%f", &altura);

    //resultado: COMO A BIBLIOTECA LOCALE TÁ ATIVA, UTILIZAR A , COMO DIFERENCIADOR DE CASA DECIMAL NA RESPOSTA!
    printf("Olá, %s, você tem %.2f metros de altura", nome, altura);

    getch();
    return 0;
}
