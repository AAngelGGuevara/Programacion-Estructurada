#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad, cali;
    printf("Escribe la edad:");
    scanf("%d", &edad);
    printf("Escribe tu calificacion:");
    scanf("%d", &cali);

    if ((cali >=0 && cali <=100) && (edad >0))
    {
        if (cali >= 60)
        {
           if (edad >=18)
           {
               if (edad >=65)
               {
                   printf("Aprobado y adulto mayor");
               }
           else
               {
                   printf("Aprobado y adulto");
               }
           }
           else
               {
               printf("Aprobado y menor de edad");
               }
        }
        else
        {
            if (edad >=18)
           {
               if (edad >=65)
               {
                   printf("Reprobado y adulto mayor");
               }
           else
               {
                   printf("Reprobado y adulto");
               }
           }
           else
               {
               printf("Reprobado y menor de edad");
               }
        }
    }
    else
    {
        printf("ERROR: INGRESE VALORES DENTRO DE LOS RANGOS PERMITIDOS");
    }
    system("PAUSE");
    return 0;
}
