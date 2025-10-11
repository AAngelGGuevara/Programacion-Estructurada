#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b[3];
	int i, j;
    //     i  j
    int g [3][3] = {00, 01, 02, 10, 11, 12, 20, 21, 22};

    //Imprimir memoria de entero
    printf("%d\n\n", &a);

    //Imprimir memoria de arreglo unidimensional
    printf("%d\n", &b[0]);
    printf("%d\n", &b[1]);
    printf("%d\n\n", &b[2]);

    //Imprimir memoria y valores de arreglo bidimensional
    printf("%d\n", &g[0][0]);
    printf("%d\n", &g[0][1]);
    printf("%d\n", &g[0][2]);
    printf("%d\n", &g[1][0]);
    printf("%d\n", &g[1][1]);
    printf("%d\n", &g[1][2]);
    printf("%d\n", &g[2][0]);
    printf("%d\n", &g[2][1]);
    printf("%d\n\n", &g[2][2]);

	//Imprimir posicion [2, 1]
    printf("%d\n\n", g[2][1]);

	//Imprimir arreglo como matriz
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", g[i][j]);
		}
		printf("\n");
	}

    return 0;
}
