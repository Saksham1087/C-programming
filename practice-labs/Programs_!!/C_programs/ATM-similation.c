#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {


int numbers,guess,nguesses=1;
srand(time(0));
numbers= rand()%100 + 1;
    
    
    
    char name[30];
    char email[30];
    int mobile;
    
    
    int correctPin = 1234;
    long balance = 100000;
    int enteredPin;
    int attempts = 3;
    int choice;
    int transactionAmount;
    char anotherTransaction = 'y';
    
     printf("Welcome to the ATM! (PIN:1234 since it's Demo)\n");
     
     
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
    
    
    do {
        printf("\n--- ATM Menu ---\n");
        printf("0. OPEN A NEW ACCOUNT\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice) {
            case 0:
    do {
        printf("Enter Applicant's Full Name: ");
        scanf("%s", name);

        printf("Enter Applicant's Email: ");
        scanf("%s", email);

        printf("Enter Applicant's Mobile: ");
        scanf("%d", &mobile);

        printf("\nPlease confirm your details:\n");
        printf("Full Name: %s\n", name);
        printf("Email: %s\n", email);
        printf("Mobile: %d\n", mobile);

        printf("Are these details correct? (y/n): ");
        while (getchar() != '\n');  // clear input buffer
        scanf("%c", &anotherTransaction);

    } while (anotherTransaction != 'y' && anotherTransaction != 'Y');

    printf("A/C no: MH0HDFC%d2025\n", numbers);
    break;

            case 1:
                printf("Your current balance is: **%ld**\n", balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &transactionAmount);
                if (transactionAmount <= 0) {
                    printf("Withdrawal amount must be positive.\n");
                } else if (transactionAmount % 100 != 0) {
                    printf("Please enter amount in multiples of **100**.\n");
                } else if (transactionAmount > balance) {
                    printf("Insufficient balance.\n");
                } else {
                    balance -= transactionAmount;
                    printf("Transaction successful. Please collect your cash.\n");
                    printf("New balance: **%ld**\n", balance);
                }
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &transactionAmount);
                if (transactionAmount <= 0) {
                    printf("Deposit amount must be positive.\n");
                } else {
                    balance += transactionAmount;
                    printf("Deposit successful.\n");
                    printf("New balance: **%ld**\n", balance);
                }
                break;
            case 4:
                
                anotherTransaction = 'n';
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

        
        
        if (anotherTransaction != 'n') {
            printf("\nDo you wish to perform another transaction? (y/n): ");
        
        
            while (getchar() != '\n'); 
            scanf("%c", &anotherTransaction);
        }

    } while (anotherTransaction == 'y' || anotherTransaction == 'Y');

    printf("Thank you for using the ATM! Goodbye.\n");

    return 0;
}
