#include<stdio.h>
void sum(int, int, int);
int main()
{
    int a, b, c;
    printf("enter 3 nos: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("Addition of three numbers\n");
    sum(a,b,c);    
}
void sum(int a, int b, int c)
{
    int s = a+b+c;
    printf("The sum is %d\n", s);
}
