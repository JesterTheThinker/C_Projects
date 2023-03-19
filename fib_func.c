#include<stdio.h>

void fib(int);

int main()
{
    int n;

    printf("enter no of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series\n0\n1\n");
    fib(n-2);
    return 0;
}

void fib(int n)
{
    static int n1=0, n2=1, n3;

    if (n>0)
    {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf("%d\n", n3);
        fib(n-1);
    }
}