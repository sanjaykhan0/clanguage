#include<stdio.h>
main (){
    int a;
    scanf("%d",&a);
  
    if(a>=90 && a<=100){
        printf("Your grade is +a");
    }
    else if (a>=80 && a<90){
        printf("Your grade is b");
    }
     else if (a>=70 && a<80){
        printf("Your grade is c");
    }
      else if (a>=60 && a<70){
        printf("Your grade is d");
    }
      else if (a>=50 && a<60){
        printf("Your grade is e");
    }
    else{
        printf("fail");
    }
}