#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //sincroniza com o idioma do computador do usu�rio
    setlocale(LC_ALL, "");
    //declara��o de vari�veis
    float n1, n2, n3;
    //usu�rio informa 3 valores e programa recebe e armazena os 3 valores
    printf("Ol� Aluno! Bem vindo a calculadora de m�dias.\n");

    printf("Digite a sua primeira nota:");
    scanf("%f", &n1);

    printf("Digite a sua segunda nota:");
    scanf("%f", &n2);

    printf("Digite a sua terceira nota:");
    scanf("%f", &n3);

    //programa calcula e exibe o resultado
    float somatorio = n1+n2+n3;
    float media = somatorio/3;

    printf("Sua m�dia foi: %.1f\n", media);

    //extra: programa informa se aluno est� aprovado, tem direito a recupera��o ou reprovado
    if (media>=6){
        printf("Parab�ns! Voc� est� aprovado(a)!\n");
    } else{
        if(somatorio<18 && somatorio>=8){
            printf("Voc� ainda n�o foi aprovado(a) e tem direito a reposi��o!\n");
        }else{
            printf("Voc� foi reprovado(a).\n");
        }
    }


    return 0;
}
