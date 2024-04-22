#include <stdio.h>
main()
{
    int eng, guj, maths;
    printf("enter value of eng :");
    scanf("%d", &eng);

    printf("enter value of guj :");
    scanf("%d", &guj);

    printf("enter value of maths :");
    scanf("%d", &maths);

    if (eng >= 40)
    {
        printf("english is pass\n");
    }
    else
    {
        printf("english fail\n");
    }

    if (guj >= 40)
    {
        printf("gujarati is pass\n");
    }
    else
    {
        printf("gujarati fail\n");
    }

    if (maths >= 40)
    {
        printf("maths is pass\n");
    }
    else
    {
        printf("maths fail");
    }
}