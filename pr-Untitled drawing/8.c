#include<stdio.h>
main (){
    for (int i=1; i<=4; i++){
       for(int j=1; j<=7; j++){
        if(i==2 && j==1||i==2 && j==7 || i==2 && (j>2 && j<6) || i==3 && (j>=1&& j<3) || i==3 && j==4||i==3 && j==6 ||i==3 && j==7 || i==4 && (j>=1 && j<4)||i==4 && (j>4 && j<=7)){
printf(" ");
        }
        else{
            printf("*");
        }
       }
       
        printf("\n");
    }
}