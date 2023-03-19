#include<stdio.h>
int main()
{
    int a[10];
    int  prod=1, i;
    printf("enter 5 values of array:    ");
    for (i=0; i<5; i++)
    {
        scanf("%d", &a[i]);
        prod = prod*a[i];
    }
    
    for (i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nproduct = %d", prod);
    return 0;
    
}