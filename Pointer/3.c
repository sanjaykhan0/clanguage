#include<stdio.h>
min(int *x,int *y){
  int c;
  c=*x;
  *x=*y;
  *y=c;
  printf("%d\n",*x);
  printf("%d",*y);
}

main(){
    int a,b;
    scanf("%d%d",&a,&b);

    min(&a,&b);
}