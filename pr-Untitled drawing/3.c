#include<stdio.h>
main(){
    for(int i=1;i<=5;i++){
        for(int k=2; k<=i;k++){
            printf(" ");
        }
        for (int  j = 5; j >= 2; j--)
        {
            printf(" *");
        }
        printf("\n");
    } 
}