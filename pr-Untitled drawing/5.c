
#include<stdio.h>
main(){
    for(int i=2;i<=5;i++){
        for(int k=2; k<=i;k++){
            printf(" ");
        }
        for (int  j = 5; j >= i; j--)
        {
            printf(" *");
        }
        printf("\n");
    } 
      for(int i=5;i>=2;i--){
        for(int k=2; k<=i;k++){
            printf(" ");
        }
        for (int  j = 5; j >= i; j--)
        {
            printf(" *");
        }
        printf("\n");
    } 
}