#include <stdio.h>

int main() {

    int correctPin = 1234;
    
    int enteredPin;
    int attempts = 3;
    
    
     printf("Welcome to the LOGIN SYSTEM WITH 3 ATTEMPTS.\n");
     
     
    while (attempts > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin) {
            printf("PIN accepted. Logging in...\n");
            break; 
        } else {
            attempts--;
            printf("Incorrect PIN. You have %d attempts remaining.\n", attempts);
            if (attempts == 0) {
                printf("Too many incorrect attempts. Card retained.\n");
                printf("Thank you for using the ATM! Goodbye.\n");
                return 0;

                }
        }
    }
    
    
    
    return 0;
}
