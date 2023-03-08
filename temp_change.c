#include<stdio.h>

int main()
{
    float f, c;

    printf("enter the temp in celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("%.2f C = %.2f F\n", c, f);

    return 0;
}


