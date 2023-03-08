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