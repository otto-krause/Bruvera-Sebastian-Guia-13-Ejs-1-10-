#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a, b, intermed[10]={0}, c=0, I=0;
	printf("Ingrese 2 numeros entre 0 y 10\n");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		for(int I=a-1; I>b; I--)
		{
			intermed[c]=I;
			c++;
		}
		
	}
	else if(b>a)
	{
		
		for(int I=a+1; I<b; I++)
		{
			intermed[c]=I;
			c++;
		}
	}
	for(I=0; I<10; I++)
	{
		if(intermed[I]!=0)
		{
			printf("%d\t", intermed[I]);
		}
	}
	return 0;
}

