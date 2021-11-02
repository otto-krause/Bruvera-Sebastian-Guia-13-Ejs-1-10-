#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a=0, b, vend[22]={0};
	printf("Cantidades totales por vendedor\n");
	for(int I=2; I<=21; I++)
	{
		printf("Vendedor numero %d (ventas por dia):\n", I-1);
		for(int K=1; K<=15; K++)
		{
			scanf("%d", &vend[I]);
			vend[1]+=vend[I];
		}
		vend[0]+=vend[1];
		if (a<vend[1])
		{
			a=vend[1];
			b=I-1;
		}
		printf("El total de unidades de este vendedor es de %d\n", vend[1]);
		vend[1]=0;
	}
	printf("El vendedor con la mayor cantidad de ventas es el numero %d con %d venta(s)\n", b, a);
	printf("El total de ventas entre los vendedores es %d\n", vend[0]);
	return 0;
}

