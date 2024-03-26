#include <stdio.h>
main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for(int k=i;k<=4;k++){
            printf(" ");
        }
                for(int k=i;k<=4;k++){
            printf(" ");
        }
          for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}