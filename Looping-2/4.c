#include<stdio.h>
main (){
    int k,j,n;
    k=0,j=1;
for (int i = 0; i < 10; i++)
{
    printf("%d",k);
    n=k+j;
    k=j;
    j=n;
}

  
 
}