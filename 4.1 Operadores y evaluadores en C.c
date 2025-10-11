#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	float A = 10;
	int B = 20;
	
	printf("Valor de A prefijo: %f\n", --A);
	printf("Valor de A prefijo: %d \n", A);
	
	printf("Valor de B postfijo: % d\n", B++);
	printf("Valor de B postfijo: % d\n", B);
	printf("Valor de B postfijo: % d\n", B);
	
	int x = 15;
	
	printf("Valor de x <<1 es: %d\n", x <<1);
	printf("Valor de x <<2 es: %d\n", x <<2);
	
	int k =100;
	int j = 10;
	int r;
	r = k >= j? 20:30;
	printf("Valor de R es: %d\n");
	
	system ("PAUSE");
	return 0;
}
