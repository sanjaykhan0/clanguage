#include<stdio.h>
sum(int x,int y){
    scanf("%d%d",&x,&y);

    int z,i;
    z=x/y;
i=x%y;
printf("quotient. %d\n",z);
printf("reminder %d",i);
}
main(){
    int a,b;
    sum(a,b);
}