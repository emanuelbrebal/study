#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


int main()
{
    setlocale(LC_ALL, "");
    int valor, resto, novoValor;
    char binarioS[20] = "\0";
    char reverso[20] = "";
    printf("Digite um valor inteiro em base decimal:");
    scanf("%d", &valor);
    while (valor!=1 && valor!=0){
        resto = valor%2;
        sprintf(binarioS, "%s%d", binarioS, resto);
        valor/=2;
    }
    sprintf(binarioS, "%s%d", binarioS, valor);

     //Inverte a string
    int len = strlen(binarioS);
    for (int i = 0; i < len; i++) {
        reverso[i] = binarioS[len - i - 1];
    }
    reverso[len] = '\0';


    printf("Valor em binário: %s.\n", reverso);


    return 0;
}
