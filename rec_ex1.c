#include<stdio.h>

int noprint(int);

int main()
{
    int n =1;
    printf("The first 50 natural nos, using recursion:\n");
    printf("\nthe natural nos are: ");
    noprint(n);
    printf("\n\n");
    return 0;
}

int noprint(int n)
{
    if (n<=50)
    {
        printf("%d\t", n);
        noprint(n+1);
    }
    
}