#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    //define idioma nativo do computador do usuário
    setlocale(LC_ALL, "");
    //declaração de variáveis
    float principal, taxa;
    int tempo;

    //Usuário insere valor principal, taxa anual e tempo em anos
    printf("Digite o valor principal: \n");
    scanf("%f", &principal);
    printf("Digite o valor da taxa anual: \n");
    scanf("%f", &taxa);
    printf("Digite um tempo, em anos, para inicializar o cálculo dos juros: \n");
    scanf("%d", &tempo);
    //programa armazena os valores
    //programa realiza cálculo de juros e armazena na variável montante
    float montante = principal + ((principal*taxa*tempo)/100);
    //programa exibe resultado
    printf("O novo valor, com juros, é: R$%.2f.\n", montante);

    return 0;
}
