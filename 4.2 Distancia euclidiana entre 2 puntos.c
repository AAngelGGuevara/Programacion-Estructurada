#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
	int x = sqrt(16);
	int y = pow(x,2);
	printf("%d\n", y);

	float Xi, Xj, Yi, Yj, res;

	printf("\nInserte Xi\n");
	scanf("%f", &Xi);
	printf("Inserte Xj\n");
	scanf("%f", &Xj);
	printf("Inserte Yi\n");
	scanf("%f", &Yi);
	printf("Inserte Yj\n");
	scanf("%f", &Yj);

	res = sqrt(pow((Xi - Xj),2)+ pow((Yi - Yj), 2));
	printf("El resultado es %f", res);

	return 0;
}
