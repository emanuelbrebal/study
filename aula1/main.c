#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Esse código apenas exibe algumas informações

int main()
{
    setlocale(LC_ALL, "PORTUGUESE");
    printf("Olá, meu nome é Emanuel.\n");
    printf("Serei seu assistente virtual neste momento!\n");
    printf("Selecione a opção desejada:\n");
    return 0;
}
