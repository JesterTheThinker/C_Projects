#include<stdio.h>
void sum()
{
	int a, b, c, s;
    printf("enter 3 nos: ");
    scanf("%d%d%d", &a, &b, &c);
    s = a+b+c;
    printf("The sum is %d\n", s);
}
int main()
{
	printf("Addition of 3 numbers\n");
    sum();    
}

 