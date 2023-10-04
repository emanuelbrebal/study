#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int ano, idade;
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &ano);

    idade = 2023 - ano;
    printf("Você tem: %d anos\n", idade);

    if (idade>=18 && idade>0) {
    printf("Você é maior de idade.\n");
    }
    else{
        printf("Você ainda não é maior de idade.\n");
    }
    if (idade<0){
            printf("Você ainda não nasceu");
    }


}
