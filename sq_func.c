#include<stdio.h>
int sq(int);
int main()
{
    int a, s;
    printf("Enter a number: ");
    scanf("%d", &a);
    s = sq(a);
    printf("Square of the given no is %d\n", s);
    return 0;
}

int sq(int a)
{
    return a * a;
}