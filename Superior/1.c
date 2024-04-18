#include <stdio.h>

main()
{
    int a[100];
    int b[100];
    int n, c = 0, d = 0;
    printf("array lenth\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("first arr enter value of a :");
        scanf("%d", &a[i]);
       
    }
    for (int i = 0; i < n; i++)
    {
        printf("second arr enter value of b :");
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++)
    {
        c += a[i];
        d += b[i];
    }

    printf("sum of array %d", c + d);
}