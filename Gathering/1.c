#include<stdio.h>
    evensum(int a){
        int sum,sqr;
scanf("%d",&a);
for(int i=1; i<=a; i++){
    if(i%2==0){
        printf("%d\n",i);
        sum+=i;
    }

}
        printf("sum of even num %d\n",sum);
    sqr=sum*sum;

return(sqr);
}

main(){
    int a;
    printf("squre of sum %d", evensum(a));
}