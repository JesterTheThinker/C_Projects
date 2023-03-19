#include<stdio.h>

int elg(int, int);

int main()
{
    int age;
    char vip;
    int vipflag;

    printf("Enter your age: ");
    scanf(" %d", &age);

    printf("do you have a vip pass?(Y/N): ");
    scanf(" %c", &vip);
    if (vip == 'Y' || vip =='y')
    {
        vipflag++;
    }
    

    elg(age, vipflag);
}

int elg(int age, int vipflag)
{
        if ( (age<=70 && age>=18) || vipflag==1)
    {
        printf("\nyou are eligible for driviing license\n");
    }
    else
    {
        printf("\nnot eligible\n");
    }
    return 0;
}