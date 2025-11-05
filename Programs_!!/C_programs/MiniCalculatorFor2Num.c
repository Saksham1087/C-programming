#include <stdio.h>

// Function to perform addition
void sum(int a, int b) {
    int result;
    result = a + b;
    printf("THE ADDITION OF THE TWO NO. IS %d\n\n", result);
}

// Function to perform subtraction
void sub(int a, int b) {
    int result;
    result = a - b;
    printf("THE SUBTRACTION OF THE TWO NO. IS %d\n\n", result);
}

// Function to perform multiplication
void mul(int a, int b) {
    int result;
    result = a * b;
    printf("THE MULTIPLICATION OF THE TWO NO. IS %d\n\n", result);
}

// Function to perform division, with a check for division by zero
void divi(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n\n");
    } else {
        int result;
        result = a / b;
        printf("THE DIVISION OF THE TWO NO. IS %d\n\n", result);
    }
}

int main() {
    
    int a,b;
    char input;
    
    
    printf("Enter the First No. : ");
    scanf("%d",&a);
    
    printf("Enter the Second No. : ");
    scanf("%d",&b);
    
    printf("What Arithmetic operation you have to apply(ex:- +,-,*,/) :");
    scanf(" %c",&input);
    
    // Use a switch statement for cleaner code
    switch (input) {
        case '+':
            sum(a, b);
            break;
        case '-':
            sub(a, b);
            break;
        case '*':
            mul(a, b);
            break;
        case '/':
            divi(a, b);
            break;
        default:
            printf("Error: Invalid arithmetic operation entered.\n");
            break;
    }


    return 0;
}