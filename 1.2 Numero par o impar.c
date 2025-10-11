#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, res;
    printf ("Inserta un numero\n");
    scanf ("%i", &num);
    res = num*2;
    printf ("%i\n", res);
    if (num%2 == 0)
    {
        printf ("El numero es par\n");
    }
    else
    {
        printf ("El numero es impar\n");
    }
    return 0;
}
