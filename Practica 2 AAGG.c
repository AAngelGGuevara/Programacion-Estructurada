#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    printf("Escribe la edad:");
    scanf("%d", &edad);

   if (edad >=18)
   {
       if (edad >=65)
       {
           printf("Adulto mayor");
       }
   else
       {
           printf("Adulto");
       }
   }
   else
       {
       printf("Menor de edad");
       }
    return 0;
}
