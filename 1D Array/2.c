#include<stdio.h>
main(){
    int arr[5],sum;
    printf("enter value of arr :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
        
    }
     for (int j = 0; j < 4; j++)
    {
    printf(" value of arr : %d\n",arr[j]);
           sum+=arr[j];
    }
    
    printf(" value of sum : %d\n",sum);

}