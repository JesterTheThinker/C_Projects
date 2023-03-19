#include<stdio.h>

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("swapping...\n");
    printf("a = %d, b = %d\n", *x, *y);
    return 0;
}

int main()
{
    int a, b;
    printf("Enter a= ");
    scanf("%d", &a);
    printf("Enter b= ");
    scanf("%d", &b);
    printf("entered numbers, a = %d, b = %d\n", a, b);
    swap(&a, &b);
    return 
    0;
}


