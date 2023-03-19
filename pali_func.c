#include<stdio.h>
int pali(int *a)
{
	int temp, r, i, rev=0;
	temp = *a;
	while(temp>0)
	{
		r = temp % 10;
		rev = rev * 10 + r;
		temp =  temp/10;		 	
	}
	return rev;
}

int main()
{
	int a, b;
	printf("enter a no= ");
	scanf("%d", &a);
	b = pali(&a);
	if (b==a)
	printf("the given no is a palindrome");
	else
	printf("the given no is not a palindrome");
}
