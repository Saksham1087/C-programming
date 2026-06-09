#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop to extract digits and calculate their sum
    while (number != 0) {
        digit = number % 10; // Extract the last digit
        sum += digit;        // Add the digit to the sum
        number /= 10;        // Remove the last digit from the number
    }

    // Print the sum of digits
    printf("Sum of the digits: %d\n", sum);

    return 0;
}