#include <stdio.h>
#include <stdlib.h>

int main()
{
	double lista[11];
	printf("Ingrese una lista de 11 numeros distintos de 0:\n");
	for(int I=1; I<=11; I++)
	{
		scanf("%lf", &lista[I]);
		if(lista[I]==0)
		{
			printf("0 no es valido, lo siento\n");
			break;
		}
	}
	printf("La suma entre el primer y ultimo numero es %g\n", lista[1]+lista[11]);
	for(int I=1; I<=11; I++)
	{
		if()
		{
			
		}
		else if()
		{
			
		}
		else()
		{
			
		}
	}
	return 0;
}

