#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //declaração de variáveis
    float n1, n2;

    //define idioma local do computador
    setlocale(LC_ALL, "");

    //Usuário define dois números, NÃO ESQUECER DO & NO SCANF
    printf("Digite um número:\n");
    scanf("%f", &n1);
    printf("Digite um número:\n");
    scanf("%f", &n2);

    //exibindo resultado das operações básicas
    //soma
    printf("Resultado da soma entre %.1f e %.1f : %.2f.\n", n1, n2, n1+n2);
    //diferença
    printf("Resultado da diferença entre %.1f e %.1f : %.2f.\n", n1, n2, n1-n2);
    //produto
    printf("Resultado do produto entre %.1f e %.1f : %.2f.\n", n1, n2, n1*n2);
    //razão
    printf("Resultado da razão entre %.0f e %.1f : %.2f.\n", n1, n2, n1/n2);
    //recebe qualquer entrada para encerrar o programa
    getch();

    return 0;
}
