#include <stdio.h>
#include <stdlib.h>

int main()
{
    int OP;
    float b, h, res1;
    float r, res2;
    float L, l, res3;

    do
    {
        printf("Elige la opcion deseada: \n");
        printf("Uno\n");
        printf("Dos\n");
        printf("Tres\n");
        printf("Se acabo lo que se vendia\n");
        scanf("%i",&OP);

        switch(OP)
        {
        case 1:
            printf("Area de triangulo\n");
            printf("Inserta la base:\n");
            scanf("%f", &b);
            printf("Inserta la altura:\n");
            scanf("%f", &h);
            res1 = (b*h)/2;
            printf("El resultado es %.2f\n", res1);
            break;
        case 2:
            printf("Area del circulo\n");
            printf("Inserta el radio\n");
            scanf("%f", &r);
            res2 = pow(3.1416*r, 2);
            printf("El resultado es %.2f\n", res2);
            break;
        case 3:
            printf("Perimetro del rectangulo\n");
            printf("Inserta el lado mayor\n");
            scanf("%f", &L);
            printf("Inserta el lado menor\n");
            scanf("%f", &l);
            res3 = (L*2) + (l*2);
            printf("El resultado es %.2f\n", res3);
            break;
        case 4:
            printf("Salir\n");
            break;
        }
    }
    while (OP !=4);

    system("PAUSE");
    return 0;
}
