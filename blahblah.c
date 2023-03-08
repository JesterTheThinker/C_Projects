#include<stdio.h>
int main()
{
    char name[30];
    printf("enter your name:  ");
    fgets(name, 30, stdin);

    printf("%s",name);

    return 0;
}