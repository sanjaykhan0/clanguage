#include <stdio.h>
void main()
{

    int a, b, c;

    printf("Enter a value of the first number:");
    scanf("%d", &a);
    printf("Enter a value of the second number:");
    scanf("%d", &b);
    printf("Enter a value of the third number:");
    scanf("%d", &c);

    (a < b) ? (a < c) ? printf("a is lower%d",a) : printf("c is lower%d",c) : (b < c) ? printf("b is lower%d",b) : printf("c is lower%d",c);
                                                                                                  
}