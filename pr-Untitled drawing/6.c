#include<stdio.h>
main(){
    for(int i=1;i<=6;i++){
       
        for (int  j = 1; j <=6; j++)
        {
            if(i==2&&(j>1&& j<6)||i==3&&(j>1&& j<6)||i==4&&(j>1&& j<6)||i==5&&(j>1&& j<6)){
printf("  ");
            }
            else{
            printf("* ");

            }
        }
        printf("\n");
    } 
}