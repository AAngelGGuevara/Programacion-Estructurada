#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Escribe un numero:\n");
    scanf("%d", &x);
    printf("Escribe la opcion:\n");
    scanf("%d", &op);
    switch(op)
    {
    case 1:
        if(x > 0)
            printf("Positivo");
        else
            printf("No positivo");
    break;
    case 2:
        if()
    break;
    default;
        printf("No se eligio nada");
    break;
    }
    
    return 0;
}
