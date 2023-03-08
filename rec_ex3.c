#include<stdio.h>

int fib(int, int, int, int);

int main()
{
    int n, t1 = 0, t2 = 1, nxt;
    printf("enter no of terms: ");
    scanf("%d", &n);
    printf("the fibonacci sequence:\n");
    nxt = t1 + t2;
    n= n-2;
    printf("%d\n%d\n", t1, t2);
    fib(n, t1, t2, nxt);
    return 0;
}

int fib(int n, int t1, int t2, int nxt)
{
    printf("%d\n", nxt);
    t1 = t2;
    t2 = nxt;
    nxt = t1 + t2;
    n--;
    if (n>0)
    {
        fib(n, t1, t2, nxt);
    }
}