#include<stdio.h>

int sum(int);

int main()
{
    int n;
    
    printf("enter the number: ");
    scanf("%d", &n);

    int s = sum(n);

    printf(" the sum of nos from 1 to %d = %d\n", n, s);
}

int sum(int n)
{
    int q;
    if (n == 1)
    {
        return 1;
    }
    else{
        q = n + sum(n-1);
    }
    return q;
}