#include <stdio.h>
void main()
{
    float weight, height,BMI;

    printf("Enter weight in kilograms:");
    scanf("%f", &weight);

    printf("Enter height in meters:");
    scanf("%f", &height);

    BMI = weight / (height * height);

    printf("Body Mass Index (BMI): %0.2f",BMI);
}