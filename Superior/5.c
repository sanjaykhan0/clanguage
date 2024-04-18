#include <stdio.h>

main()
{
    int a[100];
    int n;
    printf("array lenth\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("first arr enter value of a :");
        scanf("%d", &a[i]);
    }
     printf("array element :  ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
        printf("  reverse an array :  ");

     for (int i = n-1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
}