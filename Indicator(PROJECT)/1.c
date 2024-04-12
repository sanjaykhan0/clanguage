#include <stdio.h>
cube(int *b){
    int c;
    c=*b**b**b;
    
    return c;

}
main()
{
    int a;
    printf("enter vlue of a :");
    scanf("%d", &a);
    printf("%d",cube(&a));
}