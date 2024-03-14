#include <stdio.h>
main()
{
    int first, second, third, fourth;
    printf("Enter a value of the first number :");
    scanf("%d", &first);
    printf("Enter a value of the second number :");
    scanf("%d", &second);
    printf("Enter a value of the third number :");
    scanf("%d", &third);
    printf("Enter a value of the fourth number :");
    scanf("%d", &fourth);
    if (first >= second)
    {
        if (first >= third)
        {
            if (first >= fourth)
            {
                printf("first is max");
            }
            else
            {
                printf("fourth is max");

            }
        }
        else{
            if (third >= fourth)
            {
                printf("third is max");

            }
            else{
                printf("fourth is max");

            }
        }
    }
    else
    {
        if (second >= third)
        {
                printf("second is max");

        }
        else
        {
            if (third >= fourth)
            {
                printf("third is max");

            }
            else{
                printf("fourth is max");

            }
        }
    }
}