#include<stdio.h>
int main()
{
    int i, n;
    printf("enter no: ");
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
    	printf("%d x %d = %d\n", n, i, n*i);
    }
    return 0;

}
