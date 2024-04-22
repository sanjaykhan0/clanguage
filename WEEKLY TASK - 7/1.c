#include<stdio.h>

main()
{
    int num;
 
    scanf("%d",&num);
 
    if(num == 0)
        printf("Neither positive nor negative");
    else if(num < 0)
        printf("Negative");
    else
        printf("Positive");
     
    
}