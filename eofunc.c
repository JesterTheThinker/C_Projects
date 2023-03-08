#include<stdio.h>
int even_odd(int);
int main()
{
    int a, res;
    printf("enter a no.= ");
    scanf("%d", &a);

    res = even_odd(a);
    if (res == 0)
    printf("the no is even\n");
    else
    printf("the no is odd\n");
    return 0;
}
int even_odd(int a)
{
    return a % 2;
}