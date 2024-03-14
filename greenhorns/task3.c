#include <stdio.h>
void main()
{
    int angle1, angle2, angle3;

    printf("Enter the measure of the first angle: ");
    scanf("%d", &angle1);

    printf("Enter the measure of the second angle: ");
    scanf("%d", &angle2);

angle3=180-angle1-angle2;
printf("Third angle : %d", angle3);


}