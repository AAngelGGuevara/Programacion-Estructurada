#include <stdio.h>
#include <string.h>

int main() 
{
    char usuario[30];
    char pass1[20];
    char pass2[20];

    printf("Usuario: ");
    scanf("%s", usuario);

    printf("Contraseña: ");
    scanf("%s", pass1);

    printf("Confirmar contraseña: ");
    scanf("%s", pass2);

    //Comparar las contraseñas y verificar la longitud 
    if(strcmp(pass1, pass2) == 0 && strlen(pass1) >= 5)
        printf("Registro exitoso, bienvenido %s!\n", usuario);
    else if(strlen(pass1) < 5)
        printf("Error: la contraseña debe tener al menos 5 caracteres.\n");
    else
        printf("Error: las contraseñas no coinciden.\n");
    return 0;
}