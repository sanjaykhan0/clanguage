#include<stdio.h>
main (){
    int year, i=2020;
    scanf("%d",&year);
    while (i<=year)
    {
        if (i%4==0)
        {
            printf("%d\n",i);
        }
        i++;
    }
    
}