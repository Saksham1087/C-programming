#include <stdio.h> // Standard input-output library
#include <stdlib.h> // Standard library for functions like exit()

// Define a structure for an account (for simplicity, only one account is simulated)
struct Account {
    int pin;
    long balance; // Use long for balance to support larger amounts
};

// Function prototypes
void checkBalance(long balance);
long withdraw(long balance, int amount);
long deposit(long balance, int amount);

int main() {
    // Initialize a single account with a PIN and initial balance
    struct Account userAccount = {1234, 100000}; 
    int enteredPin;
    int attempts = 3; // Number of PIN attempts allowed
    int choice;
    int transactionAmount;
    char anotherTransaction;

    printf("\nWelcome to the ATM!\n");

    // PIN Authentication using a while loop
    while (attempts > 0) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == userAccount.pin) {
            printf("PIN accepted. Logging in...\n");
            break; // Exit the PIN loop
        } else {
            attempts--;
            printf("Incorrect PIN. You have %d attempts remaining.\n", attempts);
            if (attempts == 0) {
                printf("Too many incorrect attempts. Card retained. Please contact your bank.\n");
                return 0; // Exit the program
            }
        }
    }

    // Main ATM operations menu using a do-while loop
    // This loop continues as long as the user wants another transaction
    do {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Process user's choice using a switch-case statement
        switch (choice) {
            case 1:
                checkBalance(userAccount.balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%d", &transactionAmount);
                userAccount.balance = withdraw(userAccount.balance, transactionAmount);
                break;
            case 3:
                printf("Enter amount to deposit: ");
                scanf("%d", &transactionAmount);
                userAccount.balance = deposit(userAccount.balance, transactionAmount);
                break;
            case 4:
                printf("Thank you for using the ATM! Goodbye.\n");
                exit(0); // Exit the program gracefully
            default:
                printf("Invalid choice. Please try again.\n");
        }

        // Ask if the user wants another transaction
        printf("\nDo you wish to perform another transaction? (y/n): ");
        // Clear input buffer before reading char
        while (getchar() != '\n'); 
        scanf("%c", &anotherTransaction);

    } while (anotherTransaction == 'y' || anotherTransaction == 'Y');

    printf("Thank you for using the ATM! Goodbye.\n");
    return 0;
}

// Function to check and display balance
void checkBalance(long balance) {
    printf("Your current balance is: **%ld**\n", balance);
}

// Function to handle withdrawals
long withdraw(long balance, int amount) {
    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n");
    } else if (amount % 100 != 0) { // Example: withdrawal in multiples of 100
        printf("Please enter amount in multiples of **100**.\n");
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("Transaction successful. Please collect your cash.\n");
        printf("New balance: **%ld**\n", balance);
    }
    return balance;
}

// Function to handle deposits
long deposit(long balance, int amount) {
    if (amount <= 0) {
        printf("Deposit amount must be positive.\n");
    } else {
        balance += amount;
        printf("Deposit successful.\n");
        printf("New balance: **%ld**\n", balance);
    }
    return balance;
}
