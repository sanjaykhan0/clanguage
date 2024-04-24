
#include <stdio.h>
int main()
{
    int i,j,k;
    for (i = 10; i >=6; i--)
    {
        for(k=9;k>=i;k--){
            printf("_");
        }
        for(j=i;j>=6; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}