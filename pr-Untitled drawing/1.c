#include<stdio.h>
main(){
    for(int i=1;i<=5;i++){
        for(int k=3; k<=i*2;k++){
            printf(" ");
        }
        for (int  j = 5; j > i; j--)
        {
            printf(" *");
        }
        printf("\n");
    } 
}