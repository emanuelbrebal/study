#include <stdio.h>
#include <stdlib.h>

int main()
{
    int carros, casasM=0;
    float multa;

    while (carros!=999){
        scanf("%d", &carros);
            if (carros>2 && carros!=999){
                multa+=(carros-2)*12.89;
                casasM++;
        }
        }
    printf("%.2f\n", multa);
    printf("%d\n", casasM);
    return 0;
}
