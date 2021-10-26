#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=0;
	double numeros[6];
	printf("Ingrese 5 numeros\n");
	for(int I=1; I<=5; I++)
	{
		scanf("%lf", &numeros[I]);
		if (a<numeros[I])
		{
			a=numeros[I];
		}
	}
	for(int I=1; I<=5; I++)
	{
		numeros[0]=numeros[0]+numeros[I];
	}
	numeros[0]= (double) numeros[0]/5;
	printf("El numero mayor es %g\n", a);
	printf("El valor promedio es %g\n", numeros[0]);
	return 0;
}

