#include <stdio.h>
#include <stdlib.h>
int stack[100], choice, n, top, x, i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top = -1;
    printf("\n Enter the size of STACK[MAX=100]: ");
    scanf("%d", &n);
    do
    {
        printf("\n\t STACK OPERATIONS USING ARRAY");
        printf("\n\t--------------------------------");
        printf("\n1.Push the element\n2.Pop the element\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    } while (choice != 4);
    return 0;
}

void push()
{
    if (top >= n - 1)
        printf("\nSTACK is over flow");
    else
    {
        printf("\nEnter the element to be added onto the stack: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top == -1)
        printf("\nUnderflow!!");
    else
    {
        printf("\nThe popped elements is %d", stack[top]);
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        for (i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
    else
        printf("The stack is empty!!");
}
