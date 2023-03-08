#include <stdio.h>
int main()
{
	int a[100] = {0};
	int i, x, pos, n;
    printf("enter no of elements: ");
    scanf("%d", &n);
    printf("enter %d elements\n", n);
	for (i = 0; i < n; i++)
	{
        scanf("%d", &a[i]);
    }
    printf("\nthe given array is\n");
	for (i = 0; i < n; i++)
	{
        printf("%d ", a[i]);
    }
    printf("\n\nenter the pos where element is to be inserted: ");
    scanf("%d", &pos);
    printf("enter the value for that positon: ");
    scanf("%d", &x);
	for (i = n-1; i >= pos-1; i--)
	{
        a[i+1] = a[i];
    }
	a[pos-1] = x;
    printf("\nthe new array is\n");
	for (i = 0; i < n; i++)
	{
        printf("%d ", a[i]);
    }
	return 0;
}
