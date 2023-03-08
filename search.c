#include <stdio.h>
int linear(int a[], int n)
{
    printf("\nLINEAR SEARCH\n");
    int x;
    printf("enter the value to search: ");
    scanf("%d", &x);
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
        else
            continue;
    }
}
int binary(int a[], int n)
{
    printf("\nBINARY SEARCH\n");
    int lo = 0;
    int hi = n - 1, mid, i;
    int x;
    printf("enter the value to search: ");
    scanf("%d", &x);
    for (i = 0; i < n; i++)
    {
        mid = (lo + hi) / 2;
        if (x == a[mid])
            return mid;
        else if (x < a[mid])
            hi = mid - 1;
        else if (x > a[mid])
            lo = mid + 1;
    }
}
int main()
{
    int a[100], n, i;
    printf("enter the size of the array: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("enter value no %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    int res = linear(a, n);
    if (res < n)
        printf("Value found at index %d\n", res);
    else
        printf("value not found");

    int res2 = binary(a, n);
    if (res2 < n)
        printf("Value found at index %d\n", res2);
    else
        printf("value not found\n");

    return 0;
}
