#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, n1, n2;
    scanf("%d", &num);
    while (num!=0){
        n1=(num/2)+1;
        n2=(num/2);
        printf("%d - %d\n",n1*n1, n2*n2);
        scanf("%d", &num);
    };

    return 0;
}
