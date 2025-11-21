#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    float *califs;
    float suma = 0.0f;
    float max, min;

    // Pedir al usuario cuantos estudiantes hay
    printf("Numero de estudiantes: ");
    scanf("%d", &n);

    // Validar que n sea un número positivo
    if (n <= 0) 
    {
        printf("El numero de estudiantes debe ser mayor que 0.\n");
        return 1;
    }

    // Reservar memoria dinámica para n calificaciones
    califs = (float*)malloc(n * sizeof(float));
    if (califs == NULL) 
    {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    // Capturar las calificaciones y sumar para el promedio
    for (int i = 0; i < n; i++) 
    {
        printf("Calificacion del estudiante %d: ", i + 1);
        scanf("%f", &califs[i]);
        suma += califs[i];
    }

    // Inicializar max y min
    max = califs[0];
    min = califs[0];

    // Buscar la calificacion mas alta y mas baja
    for (int i = 1; i < n; i++) 
    {
        if (califs[i] > max) {
            max = califs[i];
        }
        if (califs[i] < min) {
            min = califs[i];
        }
    }

    // Mostrar resultados
    printf("\nPromedio general: %.2f\n", suma / n);
    printf("Calificacion mas alta: %.2f\n", max);
    printf("Calificacion mas baja: %.2f\n", min);

    // Liberar memoria
    free(califs);
    return 0;
}