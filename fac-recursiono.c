#include<stdio.h>
int fac(int);

int main()
{
    int n, s;
    printf("enter no: ");
    scanf("%d", &n);
    s = fac(n);
    printf("factorial of %d is %d\n", n,s);

    return 0;
}

int fac(int n)
{
    if (n==1)
    {
        return 1;
    }
    else{
        return n*fac(n-1);
    }

}


    


    




