#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=0;
    int positivo=0, negativo=0, i;
    for(i=0; i<5; i++){
        printf("Digite um valor:\n");
        scanf("%f", &a);
        if (a<0){
            negativo++;
        }
        else{
            positivo++;
        }
    }
    printf("Foram digitados %d numeros negativos", negativo);

    return 0;
}
