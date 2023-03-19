#include<stdio.h>

int fib(int);

int main()
{
    int n;
    printf("enter no of terms: ");
    scanf("%d", &n);
    printf("the fibonacci sequence:\n");
    fib(n);
    return 0;
}

int fib(int n)
{ if (n<2)
{
    
    return n;
}
int  term=fib(n-2)+fib(n-1);
printf("%d\n",term);
return term;
}
