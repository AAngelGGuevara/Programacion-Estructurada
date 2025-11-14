#include <stdio.h>
#include <string.h>

//Define una estructura llamada Alumno con nombre, "c1, c2, c3”
struct Alumno
{
    char nombre[20];
    float c1, c2, c3;
};

//Implementar funciones "capturar, mostrar, mejor promedio"
//Capturar
void capturar(struct Alumno a[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        printf("\nAlumno %d\n", i + 1);

        printf("Nombre: ");
        scanf("%s", a[i].nombre);

        printf("Calif 1: ");
        scanf("%f", &a[i].c1);

        printf("Calif 2: ");
        scanf("%f", &a[i].c2);

        printf("Calif 3: ");
        scanf("%f", &a[i].c3);
    }
}

//Mejor promedio
float promedio(struct Alumno a) 
{
    return (a.c1 + a.c2 + a.c3) / 3;
}
struct Alumno mejor(struct Alumno a[], int n) 
{
    int pos = 0;
    for (int i = 1; i < n; i++) 
	{
        if (promedio(a[i]) > promedio(a[pos])) 
		{
            pos = i;
        }
    }
    return a[pos];
}

//Mostrar
void mostrar(struct Alumno a[], int n) 
{
    printf("\n--- Lista de alumnos ---\n");
    for (int i = 0; i < n; i++) 
	{
        printf("Nombre: %s\n", a[i].nombre);
        printf("Calificacion 1: %.2f  Calificacion 2: %.2f  Calificacion 3: %.2f  Promedio: %.2f\n", a[i].c1, a[i].c2, a[i].c3, promedio(a[i]));
    }
}


//Funcion main
int main()
{
	//Crea un arreglo de 3 alumnos
	struct Alumno grupo[3];
	
	// 1) Capturar datos
	capturar(grupo, 3);

	// 2) Mostrar todos los registros
	mostrar(grupo, 3);

	// 3) Encontrar y mostrar el mejor alumno
	struct Alumno top = mejor(grupo, 3);
	printf("\nAlumno con mejor promedio: %s (%.2f)\n", top.nombre, promedio(top));
	return 0;
}
