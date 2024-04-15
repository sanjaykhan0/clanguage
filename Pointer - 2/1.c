#include <stdio.h>

main()
{
    int arr[5] = {5, 9, 4, 7, 3};
    int *ptr;

    for (int i = 4; i >= 0; i--)
    {
        ptr = &arr[5];
        ptr = &arr;
        printf("%d,%u\n", ptr + i, *(ptr + i));
    }
}