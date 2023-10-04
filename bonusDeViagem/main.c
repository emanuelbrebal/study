#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, Bonus;
    scanf("%f", &salario);
    Bonus=salario*0.75;
    if (Bonus<2000){
        printf("ARGENTINA");
     }else{
        if (Bonus>=2000 && Bonus<3000){
            printf("ESPANHA");
        } }if(Bonus>=3000){
        printf("ALEMANHA");
    }




    return 0;
}
