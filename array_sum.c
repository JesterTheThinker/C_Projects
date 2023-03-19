#include<stdio.h>
int sum(int a[]);
int main()
{
    int a[5] = {1,2,3,4,5} , res;
    res = sum(a);
    printf("the sum = %d\n", res);
    return 0;
}
int sum(int a[])
{
    int sum;
    for(int i = 0; i<5; i++)
    {
        sum += a[i];
    }
    return sum;
}
