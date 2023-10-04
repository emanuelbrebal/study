#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //sincroniza com o idioma do computador do usuário
    setlocale(LC_ALL, "");
    //declaração de variáveis
    float n1, n2, n3;
    //usuário informa 3 valores e programa recebe e armazena os 3 valores
    printf("Olá Aluno! Bem vindo a calculadora de médias.\n");

    printf("Digite a sua primeira nota:");
    scanf("%f", &n1);

    printf("Digite a sua segunda nota:");
    scanf("%f", &n2);

    printf("Digite a sua terceira nota:");
    scanf("%f", &n3);

    //programa calcula e exibe o resultado
    float somatorio = n1+n2+n3;
    float media = somatorio/3;

    printf("Sua média foi: %.1f\n", media);

    //extra: programa informa se aluno está aprovado, tem direito a recuperação ou reprovado
    if (media>=6){
        printf("Parabéns! Você está aprovado(a)!\n");
    } else{
        if(somatorio<18 && somatorio>=8){
            printf("Você ainda não foi aprovado(a) e tem direito a reposição!\n");
        }else{
            printf("Você foi reprovado(a).\n");
        }
    }


    return 0;
}
