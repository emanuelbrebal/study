#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3;
    printf("Digite um valor num�rico inteiro:\n");
    scanf("%d", &n1);
    n3=n1;
    printf("Digite um outro valor num�rico inteiro:\n");
    scanf("%d", &n2);
    n1=n2;
    n2=n3;
    printf("Voc� digitou primeiramente: %d.\n", n1);
    printf("E logo em seguida, digitou: %d.\n", n2);
    printf("=P");

    return 0;
}
