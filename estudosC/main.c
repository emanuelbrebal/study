#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int ano, idade;
    printf("Digite seu ano de nascimento:\n");
    scanf("%d", &ano);

    idade = 2023 - ano;
    printf("Voc� tem: %d anos\n", idade);

    if (idade>=18 && idade>0) {
    printf("Voc� � maior de idade.\n");
    }
    else{
        printf("Voc� ainda n�o � maior de idade.\n");
    }
    if (idade<0){
            printf("Voc� ainda n�o nasceu");
    }


}
