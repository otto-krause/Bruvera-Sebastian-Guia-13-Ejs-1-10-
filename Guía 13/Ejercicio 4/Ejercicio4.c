#include <stdio.h>
#include <stdlib.h>

int main()
{
	double alum[31];
	printf("Ingrese las notas de cada uno de los alumnos\n");
	for(int I=1; I<=30; I++)
	{
		scanf("%lf", &alum[I]);
	}
	for(int I=1; I<=30; I++)
	{
		alum[0]+=alum[I];
	}
	alum[0]= (double) alum[0]/30;
	printf("El valor promedio es %g\n", alum[0]);
	return 0;
}

