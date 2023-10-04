#include <stdio.h>
#include <stdlib.h>

int main()
{
   float ph;
   scanf("%f", &ph);
   if (ph<7){
    printf("Acida");
   } else {
       if (ph>7){
        printf("Basica");
       } else{
        printf("Neutra");
       }
   }


    return 0;
}
