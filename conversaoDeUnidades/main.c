#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define polegada 0.393701

int main()
{
    //define idioma local do computador
    setlocale(LC_ALL, "");

    //declara��o de vari�veis
    float distancia;

    //Usuario define insere distancia em cm e programa armazena valor em variavel
    printf("Digite uma dist�ncia em Cent�metros (cm): \n");
    scanf("%f", &distancia);

    //programa calcula e exibe resultado da convers�o
    printf("Dist�ncia em polegadas: %.2f polegadas.", distancia*polegada);

    return 0;
}
