#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Esse c�digo apenas exibe algumas informa��es

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    printf("Ol�, meu nome � Emanuel.\n");
    printf("Serei seu assistente virtual neste momento!\n");
    printf("Selecione a op��o desejada:\n");
    return 0;
}
