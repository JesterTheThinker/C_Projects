#include<stdio.h>
int main()
{
    int i, n, t1, t2, nxt;

    printf("enter no of terms: ");
    scanf("%d", &n);

    t1 = 0;
    t2 = 1;
    nxt = t1+t2;

    printf("Fibonacci Numbers: \n");
    printf("%d\n%d\n", t1, t2);

    for (i=3; i<=n; i++)
    {
        printf("%d\n", nxt);
        t1 = t2;
        t2 = nxt;
        nxt = t1 + t2;
    }
    return 0;
}


