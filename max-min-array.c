#include<stdio.h>
int main()
{
	int a[5], i;

	for(i=0; i<5; i++)
	{
		printf("enter elements:  ");
		scanf("%d", &a[i]);
	}

	int max = a[0], min = a[0];

	for(i=1; i<5; i++)
	{
		if (max < a[i])
		max = a[i];

		if (min > a[i])
		min = a[i];
	}
	printf("Max is %d, min is %d\n", max, min);

	return 0;
}
