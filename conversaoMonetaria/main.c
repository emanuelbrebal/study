#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //sincroniza com o idioma do computador do usu�rio
    setlocale(LC_ALL, "");
    //declara��o de vari�veis
    float valor, cambio;

    //usuario digita valores e programa armazena
    printf("Digite um valor em D�lares: ");
    scanf("%f", &valor);
    printf("Digite o valor da taxa de c�mbio atual do d�lar:");
    scanf("%f", &cambio);

    //programa calcula e exibe resultado
    printf("Esse valor equivale a: R$%.2f.", cambio*valor);
    return 0;
}
