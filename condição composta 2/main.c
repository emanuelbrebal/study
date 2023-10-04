#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <strings.h>

int main()
{
    setlocale(LC_ALL, "");
    char gen[10];
    int idade;
    printf("Seu gênero é masculino ou feminino?\n");
    scanf("%s", &gen);
    printf("Qual sua idade?\n");
    scanf("%d", &idade);

    if (strcmp(gen, "feminino")==0 || idade<18 || idade>45)
        printf("Está liberado(a)");
    else
        printf("Precisa se alistar");

    return 0;
}
