#include <stdio.h>
#include <stdlib.h>
int q[100], n, f, r, x, i;
void nq(void);
void dq(void);
void display(void);
int main()
{
    f = -1;
    r = -1;
    int choice;
    printf("\n Enter the size of QUEUE[MAX=100]: ");
    scanf("%d", &n);
    do
    {
        printf("\n\t QUEUE OPERATIONS USING ARRAY");
        printf("\n\t------------------------------");
        printf("\n1.Enqueue\n2.Dequeue\n3.Show\n4.End");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            nq();
            break;
        case 2:
            dq();
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
void nq()
{
    if (r == n - 1 && f == 0 || f == r + 1)
    {
        printf("Overflow!!");
    }
    else if (f == -1)
    {
        f = 0;
        r = 0;
        printf("\nEnter the value to be added: ");
        scanf("%d", &q[r]);
    }
    else if (r == n - 1 && f != 0)
    {
        r = 0;
        printf("\nEnter the value to be added: ");
        scanf("%d", &q[r]);
    }
    else
    {
        r++;
        printf("\nEnter the value to be added: ");
        scanf("%d", &q[r]);
    }
}
void dq()
{
    if (f == -1)
    {
        printf("Underflow!!");
    }
    else if (f == r)
    {
        printf("The deleted element is %d", q[f]);
        f = -1;
        r = -1;
    }
    else
    {
        printf("The deleted element is %d", q[f]);
        f++;
    }
}
void display()
{
    if (f == -1)
    {
        printf("\nThe Queue is empty!!\n");
    }
    else
    {
        printf("\n Front-> %d\n", f);
        for (i = f; i != r; i = (i + 1) % n)
        {
            printf("%d ", q[i]);
        }
        printf("%d", q[i]);
        printf("\n Rear-> %d", r);
    }
}