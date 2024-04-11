#include<stdio.h>
min(int *a,int *b){
    if(*a<*b){
        printf("a is min : %d",*a);
    }
    else{
        printf("b is min : %d",*b);

    }
}

main(){
    int a,b;
    scanf("%d%d",&a,&b);

    min(&a,&b);
}