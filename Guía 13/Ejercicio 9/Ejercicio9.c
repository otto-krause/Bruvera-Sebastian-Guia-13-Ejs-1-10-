#include <stdio.h>
#include <stdlib.h>

int main()
{
	double lista[11];
	int	a=0;
	printf("Ingrese una lista de 10 numeros distintos de 0:\n");
	for(int I=1; I<=10; I++)
	{
		scanf("%lf", &lista[I]);
		if(lista[I]==0)
		{
			printf("0 no es un numero valido, lo siento\n");
			return 0;
		}
	}
	printf("La suma entre el primer y ultimo numero es %g\n", lista[1]+lista[10]);
	for(int I=1; I<10; I++)
	{
		if(lista[I]<lista[I+1])
		{
			a+=1;
		}
		else if(lista[I]>lista[I+1])
		{
			a-=1;
		}
	}
	if(a==9)
	{
		printf("La lista esta en orden ascendente\n");
	}
	else if(a==-9)
	{
		printf("La lista esta en orden descendente\n");
	}
	else
	{
		printf("La lista esta desordenada\n");
	}
	return 0;
}

