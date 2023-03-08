#include<stdio.h>
int main()
{
	int a;
	char n[50], g, ic, mf, c, con;

	printf("INSURANCE ELIGIBILITY\n");
	do
	{
		fflush(stdin);
		printf("\nEnter your name: ");
		scanf("%s", &n);

		while(1)
		{
			fflush(stdin);
			printf("Enter age: ");
			scanf("%d", &a);
			if(a > 0)
			{
				break;
			}
			else
			{
				printf("\nAge should be greater than 0.\n");
			}
		}

		while(1)
		{
			fflush(stdin);
			printf("Enter your gender (M/F): ");
			scanf("%c", &g);
			if(g == 'M' || g == 'F' || g == 'm' || g == 'f')
			{
				break;
			}
			else
			{
				printf("\n(M/F only)\n");
			}
		}

		while(1)
		{
			fflush(stdin);
			printf("Indian citizen (Y/N): ");
			scanf("%c", &ic);
			if(ic == 'Y' || ic == 'N' || ic == 'y' || ic == 'n')
			{
				break;
			}
			else
			{
				printf("\n(Y/N only)\n");
			}
		}

		while(1)
		{
			fflush(stdin);
			printf("Medical fit (Y/N): ");
			scanf("%c", &mf);
			if(mf == 'Y' || mf == 'N' || mf == 'y' || mf == 'n')
			{
				break;
			}
			else
			{
				printf("\n(Y/N only)\n");
			}
		}

		if(a >= 25 && a <= 45 && (ic == 'Y' || ic == 'y'))
		{
			if(mf == 'Y' || mf == 'y')
			{
				if(g == 'M' || g == 'm')
				{
					printf("\nThe premium is Rs 4K/month and the policy amount is Rs 5 Lakh.\n\n");
				}
				else
				{
					printf("\nThe premium is Rs 3K/month and the policy amount is Rs 3 Lakh.\n\n");
				}
			}
			else
			{
				printf("\nThe premium is Rs 2K/month and the policy amount is Rs 2 Lakh.\n\n");
			}
		}
		else
		{
			printf("\n%s, you are not eligible for insurance.\n\n", n);
		}

		fflush(stdin);
		printf("Do You wish to add another entry?(Y/N): ");
		scanf("%c", &con);

	} while (con == 'Y' || con == 'y');

	return 0;
}





























