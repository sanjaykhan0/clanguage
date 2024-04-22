#include<stdio.h>

main(){
    int year;

printf("enter value ");
scanf("%d",&year);

if(year%4==0)
{
    printf("this leap year %d",year);
}
else{
        printf("this not leap year %d",year);

}

}