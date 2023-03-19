#include<stdio.h>
int sum(int,int,int);
int main()
{
    int a, b, c, s;
    printf("enter 3 nos: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Addition of three numbers\n");
    s = sum(a,b,c);
    printf("The sum is %d\n", s);
    return 0;
}
int sum(int a, int b, int c)
{
    return a+b+c;
}
