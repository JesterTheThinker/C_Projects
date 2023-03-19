#include<stdio.h>
 
int main()
{
    int y;

    printf("enter the year: ");
    scanf("%d", &y);

    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                printf("the year is leap\n");
            }
            else
            {
                printf("the year is not leap\n");
            }
        }
        else
        {
            printf("the year is leap\n");
        }
    }
    else
    {
        printf("the year is not leap\n");
    }

}

