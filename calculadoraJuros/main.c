#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    //define idioma nativo do computador do usu�rio
    setlocale(LC_ALL, "");
    //declara��o de vari�veis
    float principal, taxa;
    int tempo;

    //Usu�rio insere valor principal, taxa anual e tempo em anos
    printf("Digite o valor principal: \n");
    scanf("%f", &principal);
    printf("Digite o valor da taxa anual: \n");
    scanf("%f", &taxa);
    printf("Digite um tempo, em anos, para inicializar o c�lculo dos juros: \n");
    scanf("%d", &tempo);
    //programa armazena os valores
    //programa realiza c�lculo de juros e armazena na vari�vel montante
    float montante = principal + ((principal*taxa*tempo)/100);
    //programa exibe resultado
    printf("O novo valor, com juros, �: R$%.2f.\n", montante);

    return 0;
}
