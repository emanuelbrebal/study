#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //setlocale
    setlocale(LC_ALL, "");

    //declaração de variáveis
    int num;

    //programa recebe o valor e calcula a tabuada
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("Calculando tabuada...\n");
    printf("-------------\n");
    printf("1 x %d: %d.\n", num, num*1);
    printf("2 x %d: %d.\n", num, num*2);
    printf("3 x %d: %d.\n", num, num*3);
    printf("4 x %d: %d.\n", num, num*4);
    printf("5 x %d: %d.\n", num, num*5);
    printf("6 x %d: %d.\n", num, num*6);
    printf("7 x %d: %d.\n", num, num*7);
    printf("8 x %d: %d.\n", num, num*8);
    printf("9 x %d: %d.\n", num, num*9);
    printf("10 x %d: %d.\n", num, num*10);
    printf("-------------\n");
    printf("Para encerrar, digite qualquer tecla.");
    getch();
    return 0;
}
