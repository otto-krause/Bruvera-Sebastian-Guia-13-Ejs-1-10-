#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=0, b=0;
	double sueld[21];
	printf("Ingrese los sueldos de 20 personas\n");
	for(int I=1; I<=20; I++)
	{
		scanf("%lf", &sueld[I]);
		
	}
	for(int I=1; I<=20; I++)
	{
		if(sueld[I]<2000)
		{
			a+=1;
		}
		else if(sueld[I]>2000)
		{
			b+=1;
		}
	}
	printf("%d personas ganan menos de $2000 y %d ganan mas de $2000\n", a, b);
	return 0;
}

