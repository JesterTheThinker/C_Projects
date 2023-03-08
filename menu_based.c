#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
void generatePattern()
{
	int i, j;
	int a[7] = {0,1,2,3,4,5,6};
	
	for(i=6;i>1;i--)
	{
		for(j=i;j>=0;j--)
		{
			printf("%d ", a[j]);
		}
		printf("\n");
	}
}
void vote()
{
	int i, A = 0, B = 0;
	char a[10] = {'A','B','A','A','C','A','B','B','A','D'};
	
	for(i=0;i<10;i++)
	{
		switch(a[i])
		{
			case 'A':
				A++;
				break;
				
			case 'B':
				B++;
				break;
			
			default:
				printf("Invalid Vote: %c\n", a[i]);
		}
	}
	
	printf("Votes secured by party 'A' = %d\n", A);
	printf("Votes secured by party 'B' = %d", B);
}
void occurrence()
{
	char str[MAX_SIZE];
    char toSearch;
    int i, count;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    toSearch = getchar();
    count = 0;
    i=0;
    while(str[i] != '\0')
    {
        if(str[i] == toSearch)
        {
            count++;
        }
        i++;
    }
    printf("Total occurrence of '%c' = %d", toSearch, count);
}
void pointer()
{
	char ch, *chp;
    int i, *ip;
    float ff, *fp;
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("\nEnter integer: ");
    scanf("%d", &i);
    printf("\nEnter float: ");
    scanf("%f", &ff);
    
    chp = &ch;
    ip = &i;
    fp = &ff;
    
    printf("\nAddress contained in chp: %u", chp);
    printf("\nAddress contained in ip: %u", ip);
    printf("\nAddress contained in fp: %u", fp);
    printf("\nValue of ch using chp pointer: %c", *chp);
    printf("\nValue of i using ip pointer: %d", *ip);
    printf("\nValue of ff using fp pointer: %f", *fp);
    printf("\nSize of ch using chp pointer: %ld byte", sizeof(chp));
    printf("\nSize of i using ip pointer: %ld byte", sizeof(ip));
    printf("\nSize of ff using fp pointer: %ld byte", sizeof(fp));
}
int main()
{
	int c;
	
	printf("Enter 1 to generate pattern.\n");
	printf("Enter 2 to count and print the total number of votes secured by party 'A' and party 'B'.\n");
	printf("Enter 3 to detect the occurrence of a character in a string given by user.\n");
	printf("Enter 4 to display the values, addresses and size of all the variables.\n");
	
	scanf("%d", &c);
	fflush(stdin);
	
	switch(c)
	{
		case 1:
		{
			generatePattern();
			break;
		}
		
		case 2:
		{
			vote();
			break;
		}
		
		case 3:
		{
			occurrence();
			break;
		}
		
		case 4:
		{
			pointer();
			break;
		}
		
		default:
		{
			printf("Wrong Choice!");
		}
	}
	
	return 0;
}