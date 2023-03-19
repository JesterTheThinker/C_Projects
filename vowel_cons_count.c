#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	char b[10]= "AEIOU";
	int i, j, l, v=0, c=0;

	printf("enter your name:	");
	fgets(a, 30, stdin);

	l = strlen(a);

	for(i=0; i<l; ++i)
	{
		for(j=0; j<5; ++j)
		{
			if (strcmp(a[i],b[j])==0)
			++v;
			else
			++c;
		}
	}

	printf("In the string %s, no of vowels are %d and no of consonants are %d", a, v, c);

	return 0;
	
	
}
