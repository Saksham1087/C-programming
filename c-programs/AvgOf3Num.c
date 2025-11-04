#include <stdio.h>


float calculateAverage(float num1, float num2, float num3) {
    float sum = num1 + num2 + num3;
    float average = sum / 3.0; 
    
    return average;
}

int main() {
    float number1, number2, number3;
    float avg;

    
    printf("Enter the first number: ");
    scanf("%f", &number1);

    printf("Enter the second number: ");
    scanf("%f", &number2);

    printf("Enter the third number: ");
    scanf("%f", &number3);

    
    avg = calculateAverage(number1, number2, number3);

    
    printf("The average of %.2f, %.2f, and %.2f is: %.2f\n", number1, number2, number3, avg);

    return 0;
}