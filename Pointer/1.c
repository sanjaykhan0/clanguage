#include<stdio.h>
max(int *a,int *b){
    if(*a>*b){
        printf("a is max : %d",*a);
    }
    else{
        printf("b is max : %d",*b);

    }
}

main(){
    int a,b;
    scanf("%d%d",&a,&b);

    max(&a,&b);
}