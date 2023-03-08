#include<stdio.h>

int leap(int);
 
int main()
{
    int y, x;

    printf("enter the year: ");
    scanf("%d", &y);

    x = leap(y);

    if (x==1)
    {
        printf("the year is leap\n");
    }
    else
    {
        printf("the year is not leap\n");
    }

    return 0;

}

int leap(int y)
{
    int flag;
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        else
        {
            flag=1;
        }
    }
    else
    {
        flag=0;
    }

    return flag;
}


