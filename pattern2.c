#include<stdio.h>
int main()
{
	int i, j, n, k=0;

	printf("enter no of rows:  ");
	scanf("%d", &n);

	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
            k++;
			printf("%d", k);
		}
		printf("\n");
	}
	return 0;
}
