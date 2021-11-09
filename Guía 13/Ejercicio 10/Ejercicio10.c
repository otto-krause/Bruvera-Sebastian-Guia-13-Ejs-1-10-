#include <stdio.h>
#include <stdlib.h>

int main()
{
	double vec[13];
	int a=0;
	printf("Ingrese 10 numeros:\n");
	for(int I=3; I<=12; I++)
	{
		scanf("%lf", &vec[I]);
	}
	for(int I=3; I<=12; I++)
	{
		vec[0]+=vec[I];
	}
        vec[1]=vec[3];
	for(int I=4; I<=12; I++)
	{
		vec[1]= (double) vec[1]*vec[I];
	}
	vec[2]= (double) vec[0]/10;
	for(int I=3; I<=12; I++)
	{
		if(vec[I]<vec[2])
		{
			a+=1;
		}
	}
	printf("La suma de todos los numeros es %g\nEl producto es %g\nEl promedio es %g\nLa cantidad de numeros debajo del promedio es de %d", vec[0], vec[1], vec[2], a);
	return 0;
}

