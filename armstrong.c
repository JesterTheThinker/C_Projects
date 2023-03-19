#include <stdio.h>
int main() 
{
    int n, temp, r, res = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &n);
    temp = n;

    while (temp != 0) {
       r = temp % 10; 
       res += r * r * r;
       temp /= 10;
    }

    if (res == n)
        printf("%d is an Armstrong number.", n);
    else
        printf("%d is not an Armstrong number.", n);

    return 0;
}


