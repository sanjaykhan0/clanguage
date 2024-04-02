#include<stdio.h>
main(){
    int arr[5];
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("Negative elements from an Array: ");
    for(int j=0;j<5;j++){
        if(arr[j]<0){
            
            printf("%d",arr[j]);
        }
    }
}