#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //sincroniza com o idioma nativo do usuário
    setlocale(LC_ALL, "");
    //declaração de variáveis
    int selecao;
    float temp;

    //iniciar programa com mensagens
    printf("Bem vindo ao programa de conversão de temperatura!\n");
    printf("Selecione a escala termométrica para iniciar:\n 1-C, 2-F ou 3-K:\n");
    scanf("%d", &selecao);
    //programa recebe valor
    printf("Digite o valor da temperatura:");
    scanf("%f", &temp);

    if (selecao==1){
            printf("Sua temperatura em escala ºCelsius equivale a: %.2fK\n", temp+273);
            float CparaF = (temp*18/10) + 32;
            printf("e equivale a: %.2fF\n", CparaF);
    }
    if (selecao==2){
            float FparaC = (temp-32)*5/9;
            float FparaK = (temp-32)*5/9 + 273;
            printf("Sua temperatura em escala Fahreiheit equivale a: %.2fC\n", FparaC);
            printf("e equivale a: %.2fF\n", FparaK);
    }
    if (selecao==3){
            float KparaC = temp-273;
            float KparaF = (temp-273)*9/5+32;
            printf("Sua temperatura em escala Kelvin equivale a: %.2fC\n", KparaC);
            printf("e equivale a: %.2fF\n", KparaF);
    }





    return 0;
}
