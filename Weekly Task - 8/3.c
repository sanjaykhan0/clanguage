// Reverse a given number using loops:
// Enter an integer: 12345
// Reversed Number: 54321

#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number: %d\n", reverse);

}