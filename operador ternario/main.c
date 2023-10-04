#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int valor;
    printf("Digite um valor:");
    scanf("%d", &valor);
    (valor%2==0 ? valor++ : valor--);
    printf("O valor final é: %d", valor);

    return 0;
}
