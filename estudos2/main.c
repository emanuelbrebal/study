#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vA, vC, vP, qA, qC, qP, total;

    scanf("%f", &vA);

    scanf("%f", &vC);

    scanf("%f", &vP);

    scanf("%f", &qA);

    scanf("%f", &qC);

    scanf("%f", &qP);

    total=(vA*qA) + (vC*qC) + (vP*qP);

    printf("Valor: R$%.2f", total);

    return 0;
}
