#include <stdio.h>
cube(int *x , int *y , int *z){
    int u;
    u=*x;
    *x=*y;
    *y=*z;
    *z=u;
    
    printf("value a %d\n",*x);
    printf("value a %d\n",*y);
    printf("value a %d\n",*z);

    
    


}
main()
{
    int a,b,c;
    printf("enter vlue of :");
    scanf("%d%d%d", &a,&b,&c);
    cube(&a,&b,&c);
}