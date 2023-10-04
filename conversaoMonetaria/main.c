#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //sincroniza com o idioma do computador do usuário
    setlocale(LC_ALL, "");
    //declaração de variáveis
    float valor, cambio;

    //usuario digita valores e programa armazena
    printf("Digite um valor em Dólares: ");
    scanf("%f", &valor);
    printf("Digite o valor da taxa de câmbio atual do dólar:");
    scanf("%f", &cambio);

    //programa calcula e exibe resultado
    printf("Esse valor equivale a: R$%.2f.", cambio*valor);
    return 0;
}
