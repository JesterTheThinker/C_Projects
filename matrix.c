#include<stdio.h>
#include<stdlib.h>
void add(int m[3][3], int n[3][3], int sum[3][3])	
{
	int i, j;
  	for(i=0;i<3;i++)
    	        for(j=0;j<3;j++)
      		        sum[i][j] = m[i][j] + n[i][j];
}
void subtract(int m[3][3], int n[3][3], int result[3][3])
{
	int i, j;
  	for(i=0;i<3;i++)
    	        for(j=0;j<3;j++)
      		        result[i][j] = m[i][j] - n[i][j];
}
void scalar(int m[3][3], int result[3][3], int n)
{
	int i, j;
  	for(i=0;i<3;i++)
    	        for(j=0;j<3;j++)
      		        result[i][j] = n * m[i][j];
}
void multiply(int m[3][3], int n[3][3], int result[3][3])
{
	int i, j, k;
  	for(i=0; i < 3; i++)
  	{
        	for(j=0; j < 3; j++)
        	{
      	        	result[i][j] = 0;
      
      		        for (k = 0; k < 3; k++)
      			        result[i][j] += m[i][k] * n[k][j];
    	        }
  	}
}
void display(int matrix[3][3])
{
	int i, j;
  	for(i=0; i<3; i++)
  	{
    	        for(j=0; j<3; j++)
      		        printf("%d\t",matrix[i][j]);
    	        printf("\n");
  	}
}
int main()
{
	int i, j, choice, n, a[3][3], b[3][3], c[3][3];
  	
  	do
  	{
    	printf("\nChoose the matrix operation,\n");
        printf("----------------------------\n");
        printf("1. Read matrix\n");
        printf("2. Display matrix\n");
        printf("3. Add and subtract matrix\n");
        printf("4. Scalar multiply\n");
		printf("5. Matrix multiply\n");
        printf("6. Exit\n");
        printf("----------------------------\n");
        printf("Enter your choice: ");
		scanf("%d", &choice);
		
        	switch (choice)
		{
      	        	case 1:
      		        	printf("Enter matrix 1:\n\n");
      			
			       	for(i=0;i<3;i++)
      				        for(j=0;j<3;j++)
      					        scanf("%d", &a[i][j]);
      			
          			printf("Enter matrix 2:\n\n");
      			
				for(i=0;i<3;i++)
          				for(j=0;j<3;j++)
      	        				scanf("%d", &b[i][j]);
	                	break;
			case 2:
				printf("Matrix 1:\n\n");
				display(a);
      			        printf("Matrix 2:\n\n");
				display(b);
				break;
			case 3:
				add(a, b, c);
	        	        printf("Sum of matrix: \n");
	        	        display(c);
				subtract(a, b, c);
				printf("Subtraction of matrix: \n");
				display(c);
				break;
			case 4:
				printf("Enter an number to multiply with matrix A:\n");
				scanf("%d", &n);
				scalar(a, c, n);
				printf("Scalar multiplication of matrix A:\n");
				display(c);
				
				printf("Enter an number to multiply with matrix B:\n");
				scanf("%d", &n);
				scalar(b, c, n);
				printf("Scalar multiplication of matrix B:\n");
				display(c);
				break;
			case 5:
				multiply(a, b, c);
				printf("Multiplication of matrix: \n");
				display(c);
				break;
			case 6:
				printf("Thank You.\n");
				exit(0);
			default:
				printf("Invalid input.\n");
				printf("Please enter the correct input.\n");
    	        }
  	} while(1);
        return 0;
}








