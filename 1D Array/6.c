#include<stdio.h>
main(){
    int arr[5];
    printf("enter value of arr :");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d",&arr[i]);
        
    }
     for (int j = 0; j < 4; j++)
    {
        if(arr[0] < arr[j]){
            arr[0]=arr[j];
        }
           
    }
    printf(" value of max arr : %d\n",arr[0]);

    
}