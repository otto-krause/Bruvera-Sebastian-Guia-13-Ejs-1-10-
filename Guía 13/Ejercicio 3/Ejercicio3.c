#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int a=0, b=0;
	printf("Ingrese 2 numeros\n");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		int intermed[a];
		for(int I=a; I>=b; I--)
		{
			printf("%d\t", intermed[I]);
		}
		
	}
	else if(b>a)
	{
		int intermed[b];
		for(int I=a; I<=b; I++)
		{
			printf("%d\t", intermed[I]);
		}
	}
	return 0;
}

