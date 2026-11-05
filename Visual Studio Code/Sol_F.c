#include <stdio.h>

int main() {
    float var[100];  // Define an array of 100 floats
    printf("Enter a decimal number: ");
    scanf("%f", &var[0]);  // Input a floating-point number

    printf("You entered: %.2f\n", var[0]);  // Print it with 2 decimal places
    return 0;
}