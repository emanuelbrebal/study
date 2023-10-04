#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma, pts, i=0;
    do{
        scanf("%d", &pts);
        i++;
        soma+=pts;
    }   while(i!=6);

    if(soma>=100)
        printf("Classificado");
    else
        printf("Eliminado");

    return 0;
}
