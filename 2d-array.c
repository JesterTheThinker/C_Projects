#include<stdio.h>
int main()
{
	int a[2][1], b[2][1], c[2][1];
	int i, j;

	for(i=0; i<2; ++i)
	{
		for(j=0; j<1; ++j)
		{
			printf("enter elements of a: ");
			scanf("%d", &a[i][j]);

			printf("enter elements of b: ");
			scanf("%d", &b[i][j]);

			c[i][j] = a[i][j] + b[i][j];
			
		}
	}

	printf("elements of c:\n");

	for(i=0; i<2; ++i)
	{
		for(j=0; j<1; ++j)
		{
			printf("%d\n1", c[i][j]);
		}

	}

	return 0;
	
}
