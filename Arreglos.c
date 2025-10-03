#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[6] = {1, 2, 0, 0, 3, 2};
    int opc, b, b_temp;
    float promedio = (float)(a[0] + a[1] + a[2] + a[3] + a[4] + a[5])/6;

    do
    {
        printf("--Elige una opcion:--\n");
        printf("1) Ver todos los resultados\n");
        printf("2) Ver un resultado especifico\n");
        printf("3) Modificar todos los resultados\n");
        printf("4) Modificar un resultado especifico\n");
        printf("5) Promedio de resultados\n");
        printf("6) Salir\n");
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            for (int i = 0; i < 6; i++)
            {
                printf("El marcador del juego es %d es %d\n", i+1, a[i]);
            }
        break;

        case 2:
            printf("Cual resultado de Chivas quieres ver?\n");
            scanf("%d", &b_temp);
            if (b_temp >1 && b_temp <= 6)
                {
                    b = b_temp - 1;
                    printf("El resultado de ese partido es %d\n", a[b]);
                }
            else
                {
                    printf("El valor ingresado no es valido. Seleccione otro\n.");
                }
        break;

        case 3:
            for (int i = 0; i < 6; i++)
            {
                printf("Ingresa el nuevo resultado para el juego %d: ", i + 1);
                scanf("%d", &a[i]);
            }
        break;

        case 4:
            printf("Cual resultado quieres modificar?");
            scanf("%d", &b_temp);
            if (b_temp >= 1 && b_temp <= 6)
            {
                b = b_temp - 1;
                printf("Ingresa el nuevo resultado para el juego %d: ", b_temp);
                scanf("%d", &a[b]);
            }
            else
            {
                printf("El valor ingresado no es válido. Seleccione otro.\n");
            }
        break;

        case 5:
            printf("El promedio de goles de los ultimos 6 partidos es: %.2f\n", promedio);
        break;
        }
    }
    while (opc != 6 && opc > 1 && opc < 7);

    return 0;
}
