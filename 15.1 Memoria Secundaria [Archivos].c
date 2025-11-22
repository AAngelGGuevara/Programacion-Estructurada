#include <stdio.h>
#include <string.h>

struct Alumno 
{
    char nombre[40];
    float promedio;
};

int main() 
{
    FILE *f;
    int n;
    struct Alumno a;
    char linea[100];

    printf("Cuantos alumnos deseas registrar?");
    scanf("%d", &n);
    getchar();
    f = fopen("grupo.txt", "w");
    if (f == NULL) 
    {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    for (int i = 0; i < n; i++) 
    {
        printf("\nNombre del alumno %d: ", i + 1);
        fgets(a.nombre, 40, stdin);
        a.nombre[strcspn(a.nombre, "\n")] = '\0';
        printf("Promedio: ");
        scanf("%f", &a.promedio);
        getchar();
        fprintf(f, "%s %.2f\n", a.nombre, a.promedio);
    }

    fclose(f);
    f = fopen("Grupo.txt", "r");
    if (f == NULL) 
    {
        printf("Error al abrir el archivo\n");
        return 1;
    }

    printf("\nArchivo.txt:\n");
    while (fgets(linea, 100, f) != NULL) 
    {
        printf("%s", linea);
    }
    fclose(f);
    
    return 0;
}