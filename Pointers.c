#include <stdio.h>
#include <string.h>

void calcularEstadisticas(float v[], int n, float *min, float *max, float *prom) 
{
    *min = v[0];
    *max = v[0];
    float suma = 0;

    for (int i = 0; i < n; i++) 
    {
        suma = suma + v[i];

        if (v[i] < *min) 
        {
            *min = v[i];
        }

        if (v[i] > *max) 
        {
            *max = v[i];
        }
    }

    *prom = suma / n;
}

int main() 
{
    int n;
    float califs[10];
    float min, max, prom;

    printf("Cuantas calificaciones (3-10): ");
    scanf("%d", &n);

    //Validación sencilla de n
    if (n < 3 || n > 10) 
    {
        printf("Numero invalido de calificaciones.\n");
        return 1;
    }

    //Leer las calificaciones
    for (int i = 0; i < n; i++) 
    {
        printf("Calificacion %d: ", i+1);
        scanf("%f", &califs[i]);
    }

    //Llamar a la función que calcula todo
    calcularEstadisticas(califs, n, &min, &max, &prom);

    //Mostrar resultados
    printf("Minima: %.2f\n", min);
    printf("Maxima: %.2f\n", max);
    printf("Promedio: %.2f\n", prom);

    return 0;
}