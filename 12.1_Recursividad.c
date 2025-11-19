#include <stdio.h>

int factorial(int n) 
{
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

int suma(int n) 
{
    if(n == 1) return 1;
    return n + suma(n - 1);
}

int potencia(int a, int b) 
{
    if(b == 0) return 1;
    return a * potencia(a, b - 1);
}

int contar(int n) 
{
    if(n < 10) return 1;
    return 1 + contar(n / 10);
}

int main() 
{
    int opc, n, a, b;

    do 
    {
        printf("\n-- Calculadora Recursiva --\n");
        printf("1) Factorial\n");
        printf("2) Suma de 1 a n\n");
        printf("3) Potencia\n");
        printf("4) Contar digitos\n");
        printf("5) Salir\n");
        printf("Seleccione la opcion: ");
        scanf("%d", &opc);

        switch(opc)
        {
            case 1:
                printf("Factorial a obtener: ");
                scanf("%d", &n);
                printf("Factorial de %d = %d\n", n, factorial(n));
                break;

            case 2:
                printf("Sumar de 1 hasta: ");
                scanf("%d", &n);
                printf("Suma de 1 a %d = %d\n", n, suma(n));
                break;

            case 3:
                printf("Base: ");
                scanf("%d", &a);
                printf("Exponente: ");
                scanf("%d", &b);
                printf("Potencia de %d^%d = %d\n", a, b, potencia(a, b));
                break;

            case 4:
                printf("Numero: ");
                scanf("%d", &n);
                printf("El numero %d tiene %d digitos\n", n, contar(n));
                break;

            case 5:
                printf("Salida exitosa\n");
                break;

            default:
                printf("Opcion invalida.\n");
        }
    } 
    while(opc != 5);

    return 0;
}