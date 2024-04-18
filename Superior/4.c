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
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            printf("this is even num : %d\n",a[i]);
        }
        else{
           printf("this is odd num : %d\n",a[i]);
        }
    }
}