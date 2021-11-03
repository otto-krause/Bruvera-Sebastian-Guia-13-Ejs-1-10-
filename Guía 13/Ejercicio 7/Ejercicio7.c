#include <stdio.h>
#include <stdlib.h>

int main()
{
	double nota[16];
	printf("Ingrese la nota de cada uno de los 15 alumnos\n");
	for(int I=1; I<=15; I++)
	{
		scanf("%lf", &nota[I]);
	}
	printf("Las posiciones de los alumnos con una nota mayor a 8 son: ");
	for(int I=1; I<=15; I++)
	{
		if(nota[I]>8)
		{
			printf("%d\t", I);
		}
	}
	return 0;
}

