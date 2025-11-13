#include <stdio.h>

void cuadradoPorValor (int n)
{
    n = n * n;
    printf("[cuadradoPorValor] n = %d\n", n);
}

void cuadradoPorReferencia (int *n)
{
    *n = (*n) * (*n);
    printf("[cuadradoPorReferencia] *n = %d\n", *n);
}

int main()
{
    int a = 5, b = 3;

    printf("Antes de CuadradoPorValor a = %d\n", a);
    cuadradoPorValor(a);
    printf("Despues de CuadradoPorValor a = %d\n\n", a);

    printf("Antes de CuadradoPorReferencia b = %d\n", b);
    cuadradoPorReferencia(&b);
    printf("Despues de CuadradoPorReferencia b = %d\n", b); 

    return 0;
}