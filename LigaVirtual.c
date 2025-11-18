#include <stdio.h>
#include <string.h>

#define MAX_JUGADORES 5
#define MAX_EQUIPOS 4

struct Jugador
{
    char nombre[40];
    int numero;
    int goles;
};

struct Equipo
{
    char nombre[40];
    struct Jugador jugadores[MAX_JUGADORES];
    int golesAFavor;
    int golesEnContra;
    int puntos;
};

// Función para quitar el salto de línea que deja "fgets"
void quitarSaltoLinea(char cad[])
{
    int len = strlen(cad);
    if (len > 0 && cad[len - 1] == '\n')
    {
        cad[len - 1] = '\0';
    }
}

//Registrar equipos
void registrarEquipos(struct Equipo liga[], int *numEquipos)
{
    int n;
    char buffer[100];

    printf("Cuantos equipos quieres registrar (2-%d): ", MAX_EQUIPOS);
    scanf("%d", &n);
    getchar();

    if (n < 2 || n > MAX_EQUIPOS)
    {
        printf("Numero invalido, se usara 2.\n");
        n = 2;
    }

    *numEquipos = n;

    for (int i = 0; i < n; i++)
    {
        printf("\nEquipo %d - Nombre: ", i + 1);
        fgets(buffer, sizeof(buffer), stdin);
        quitarSaltoLinea(buffer);

        if (strlen(buffer) == 0)
        {
            printf("Nombre vacio, se usara 'SinNombre'.\n");
            strcpy(buffer, "SinNombre");
        }

        strcpy(liga[i].nombre, buffer);

        liga[i].golesAFavor = 0;
        liga[i].golesEnContra = 0;
        liga[i].puntos = 0;

        for (int j = 0; j < MAX_JUGADORES; j++)
        {
            printf("Jugador %d nombre: ", j + 1);
            fgets(buffer, sizeof(buffer), stdin);
            quitarSaltoLinea(buffer);

            if (strlen(buffer) == 0)
            {
                printf("Nombre vacio, se usara 'JugadorSinNombre'.\n");
                strcpy(buffer, "JugadorSinNombre");
            }

            strcpy(liga[i].jugadores[j].nombre, buffer);

            printf("Jugador %d numero: ", j + 1);
            scanf("%d", &liga[i].jugadores[j].numero);
            getchar(); // consumir salto de linea

            liga[i].jugadores[j].goles = 0;
        }
    }
}

//Mostrar equipos
void mostrarEquipos(struct Equipo liga[], int numEquipos)
{
    if (numEquipos == 0)
    {
        printf("No hay equipos registrados.\n");
        return;
    }

    printf("\n--- Equipos y jugadores ---\n");
    for (int i = 0; i < numEquipos; i++)
    {
        printf("\nEquipo %d: %s\n", i, liga[i].nombre);
        for (int j = 0; j < MAX_JUGADORES; j++)
        {
            printf("  Jugador %d: %s (No. %d, Goles: %d)\n",
                   j + 1,
                   liga[i].jugadores[j].nombre,
                   liga[i].jugadores[j].numero,
                   liga[i].jugadores[j].goles);
        }
    }
}

//Registrar partidos
void registrarPartido(struct Equipo liga[], int numEquipos)
{
    if (numEquipos < 2)
    {
        printf("Se necesitan al menos 2 equipos para registrar un partido.\n");
        return;
    }

    printf("\n--- Equipos disponibles ---\n");
    for (int i = 0; i < numEquipos; i++)
    {
        printf("%d - %s\n", i, liga[i].nombre);
    }

    int local, visita;
    int golesLocal, golesVisita;

    printf("Selecciona equipo local: ");
    scanf("%d", &local);
    printf("Selecciona equipo visitante: ");
    scanf("%d", &visita);

    if (local < 0 || local >= numEquipos || visita < 0 || visita >= numEquipos)
    {
        printf("Indices de equipos invalidos.\n");
        return;
    }

    if (strcmp(liga[local].nombre, liga[visita].nombre) == 0)
    {
        printf("Un equipo no puede jugar contra si mismo.\n");
        return;
    }

    printf("Goles %s: ", liga[local].nombre);
    scanf("%d", &golesLocal);
    printf("Goles %s: ", liga[visita].nombre);
    scanf("%d", &golesVisita);

    liga[local].golesAFavor += golesLocal;
    liga[local].golesEnContra += golesVisita;

    liga[visita].golesAFavor += golesVisita;
    liga[visita].golesEnContra += golesLocal;

    if (golesLocal > golesVisita)
    {
        liga[local].puntos += 3;
    }
    else if (golesLocal < golesVisita)
    {
        liga[visita].puntos += 3;
    }
    else
    {
        liga[local].puntos += 1;
        liga[visita].puntos += 1;
    }

    int numJugador;
    int encontrado;

    for (int g = 0; g < golesLocal; g++)
    {
        printf("Gol %d de %s - numero de jugador: ", g + 1, liga[local].nombre);
        scanf("%d", &numJugador);

        encontrado = 0;
        for (int j = 0; j < MAX_JUGADORES; j++)
        {
            if (liga[local].jugadores[j].numero == numJugador)
            {
                liga[local].jugadores[j].goles++;
                encontrado = 1;
                break;
            }
        }

        if (!encontrado)
        {
            printf("No existe un jugador con ese numero en %s. Gol no asignado a ningun jugador.\n",
                   liga[local].nombre);
        }
    }

    for (int g = 0; g < golesVisita; g++)
    {
        printf("Gol %d de %s - numero de jugador: ", g + 1, liga[visita].nombre);
        scanf("%d", &numJugador);

        encontrado = 0;
        for (int j = 0; j < MAX_JUGADORES; j++)
        {
            if (liga[visita].jugadores[j].numero == numJugador)
            {
                liga[visita].jugadores[j].goles++;
                encontrado = 1;
                break;
            }
        }

        if (!encontrado)
        {
            printf("No existe un jugador con ese numero en %s. Gol no asignado a ningun jugador.\n",
                   liga[visita].nombre);
        }
    }

    char mensaje[120];
    strcpy(mensaje, "Partido registrado: ");
    strcat(mensaje, liga[local].nombre);
    strcat(mensaje, " vs ");
    strcat(mensaje, liga[visita].nombre);
    strcat(mensaje, "\n");
    printf("%s", mensaje);
}

//Tabla de posiciones
void tablaPosiciones(struct Equipo liga[], int numEquipos)
{
    if (numEquipos == 0)
    {
        printf("No hay equipos registrados.\n");
        return;
    }

    printf("\n--- Tabla de posiciones ---\n");
    for (int i = 0; i < numEquipos; i++)
    {
        printf("%s - Puntos: %d  GF: %d  GC: %d\n",
               liga[i].nombre,
               liga[i].puntos,
               liga[i].golesAFavor,
               liga[i].golesEnContra);
    }
}


//Funcion main
int main()
{
    struct Equipo liga[MAX_EQUIPOS];
    int numEquipos = 0;
    int opcion;

    do
    {
        printf("\n=== Liga de Futbol Virtual ===\n");
        printf("1) Registrar equipos y jugadores\n");
        printf("2) Mostrar equipos y jugadores\n");
        printf("3) Registrar partido\n");
        printf("4) Ver tabla de posiciones\n");
        printf("5) Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);
        getchar(); // consumir el salto de linea despues del numero

        switch (opcion)
        {
            case 1:
                registrarEquipos(liga, &numEquipos);
                break;

            case 2:
                mostrarEquipos(liga, numEquipos);
                break;

            case 3:
                registrarPartido(liga, numEquipos);
                break;

            case 4:
                tablaPosiciones(liga, numEquipos);
                break;

            case 5:
                printf("Saliendo del programa\n");
                break;

            default:
                printf("Opcion invalida.\n");
                break;
        }

    } while (opcion != 5);

    return 0;
}