#include<stdio.h>
void hello(){
    int a;
    scanf("%d",&a);
for(int i=1;i<=10;i++){
    printf("%d * %d = %d\n", a ,i ,a*i);
}
}
main(){
hello();
}
