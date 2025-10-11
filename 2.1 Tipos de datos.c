#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    char caracter;
    float flotante;
    int entero;
    short corto;
    long largo;
    double doble;
    double rango_char = pow(2, sizeof(caracter) * 8);
    double rango_float = pow(2, sizeof(flotante) * 8);
    double rango_int = pow(2, sizeof(entero) * 8);
    double rango_short = pow(2, sizeof(corto) * 8);
    double rango_long = pow(2, sizeof(largo) * 8);
    double rango_double = pow(2, sizeof(doble) * 8);
    printf("El caracter tiene %d bytes y tiene %d bits. Su rango es: %f\n", sizeof(caracter), sizeof(caracter)*8, rango_char);
    printf("El flotante tiene %zu bytes y tiene %zu bits. Su rango es: %f\n", sizeof(flotante), sizeof(flotante)*8, rango_float);
    printf("El entero tiene %zu bytes y tiene %zu bits. Su rango es: %f\n", sizeof(entero), sizeof(entero)*8, rango_int);
    printf("El corto tiene %zu bytes y tiene %zu bits. Su rango es: %f\n", sizeof(corto), sizeof(corto)*8, rango_short);
    printf("El largo tiene %zu bytes y tiene %zu bits. Su rango es %f\n", sizeof(largo), sizeof(largo)*8, rango_long);
    printf("El doble tiene %zu bytes y tiene %zu bits. Su rango es %f\n", sizeof(doble), sizeof(doble)*8, rango_double);
    return 0;
}
