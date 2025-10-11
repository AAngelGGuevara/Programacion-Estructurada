#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numero_secreto;
    int intento_user;
    int intentos_max = 7;
    int i;

    srand(time(NULL));

    numero_secreto = rand() % 100 + 1;

    printf("Bienvenido al juego. Adivina el numero entre 1 y 100.\n");
    printf("Tienes %d intentos para adivinarlo. ¡Mucha suerte! \n\n", intentos_max);

    for (i = 1; i <= intentos_max; i++)
    {
        printf("--- Intento #%d ---\n", i);
        printf("Ingresa tu numero: ");
        scanf("%d", &intento_user);

        if (intento_user > numero_secreto) {
            printf("El número que busco es MENOR.\n\n");
        }
        else if (intento_user < numero_secreto) {
            printf("El numero que busco es MAYOR.\n\n");
        }
        else {
            printf("\n¡FELICIDADES! Has adivinado el numero %d en %d intentos\n", numero_secreto, i);
            return 0;
        }
    }
        printf("\nHas agotado tus %d intentos. El numero secreto era: %d\n", intentos_max, numero_secreto);

return 0;

}
