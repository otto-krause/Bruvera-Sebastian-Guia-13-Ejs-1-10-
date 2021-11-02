#include <stdio.h>
#include <stdlib.h>

int main()
{
	int fibonacci[11], I;
	printf("Los primeros 10 lugares de la secuencia de Fibonacci son: ");
	fibonacci[0]=0;
	fibonacci[1]=1;
	for(I=2; I<=11; I++)
	{
		fibonacci[I]=fibonacci[I-1]+fibonacci[I-2];
	}
	for(I=0; I<=10; I++)
	{
		printf("%d\t", fibonacci[I]);
	}
	return 0;
}

