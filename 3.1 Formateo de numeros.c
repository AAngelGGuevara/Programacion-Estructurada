#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    double num1, num2, num3, suma, resta, multiplicacion, division, raiz, redondeado;
    int comparacion;

    printf("Ingrese tres numeros decimales:\n");
    printf("Numero 1: ");
    scanf("%lf", &num1);
    printf("Numero 2: ");
    scanf("%lf", &num2);
    printf("Numero 3: ");
    scanf("%lf", &num3);

    suma = num1 + num2 + num3;
    resta = num1 - num2 - num3;
    multiplicacion = num1 * num2 * num3;
    division = num1 / num2 / num3;
    raiz = sqrt(num1);

    redondeado = (num2 * 100 + 0.5) / 100;
    comparacion = (num3 > 10) ? 1 : (num3 < 10) ? -1 : 0;

    printf("\nResultados:\n");
    printf("Suma: %.3lf\n", suma);
    printf("Resta: %.3lf\n", resta);
    printf("Multiplicacion: %.2lf\n", multiplicacion);
    printf("Division: %.6lf\n", division);
    printf("Raiz cuadrada del numero 1: %.5lf\n", raiz);
    printf("Numero 2 redondeado: %.2lf\n", redondeado);
    printf("Comparacion del numero 3 con 10: ");
    printf(comparacion == 1 ? "Mayor\n" : comparacion == -1 ? "Menor\n" : "Igual\n");

    return 0;
}