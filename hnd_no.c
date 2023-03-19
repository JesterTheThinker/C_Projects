#include<stdio.h>
int hnd(int);
int main()
 {
   int num, res;
   printf("enter number\t");
   scanf("%d",&num);
   res = hnd(num);
    if(res==1)
    printf("Handsome number\n");
    else
    printf("Not handsome number\n");
    return 0;
}
int hnd(int num)
{
    int r,rev=0,r1,sum=0, flag=0;
    while(num>0)
    {
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    while(rev>9)
    {
        r1=rev%10;
        sum+=r1;
        rev=rev/10;
    }
    if(sum==rev)
    flag++;
    return flag;
}