#include<stdio.h>
int main()
{
    int a[100], pos, c, n;
    printf("Enter number of elements in array\n");
    scanf("%d", &n);
    printf("Enter %d elements\n", n);
    for (c=0 ; c<n ; c++)
    {
        scanf("%d", &a[c]);
    }
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &pos);
    if ( pos >= n+1 )
    printf("Deletion not possible.\n");
    else
    {
        for ( c = pos - 1 ; c < n - 1 ; c++ )
        {a[c] = a[c+1];}
        printf("Resultant array is\n");
        for( c = 0 ; c < n - 1 ; c++ )
        {printf("%d\n", a[c]);}
    }
    return 0;
}