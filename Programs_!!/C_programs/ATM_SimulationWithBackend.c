#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> // Include for string functions like strftime

// Function to get the current timestamp string
void get_timestamp(char *buffer, size_t buffer_size)
{
    time_t t = time(NULL);
    struct tm *tm_info = localtime(&t);
    strftime(buffer, buffer_size, "%Y-%m-%d %H:%M:%S", tm_info);
}

int main()
{
    // Variables for ATM simulation and account creation
    int numbers;
    srand(time(0));
    numbers = rand() % 100 + 1; // Used for AC number generation

    char name[30];
    char email[30];
    long long mobile;

    int correctPin = 1234;
    long balance = 100000;
    int enteredPin;
    int attempts = 3;
    int choice;
    int transactionAmount;
    char anotherTransaction = 'y';

    // --- File Handling Setup ---
    FILE *log_file = NULL;
    char timestamp[30];

    // Open the log file in append mode. It will be created if it doesn't exist.
    log_file = fopen("atm_log.txt", "a");

    if (log_file == NULL)
    {
        printf("Warning: Could not open 'atm_log.txt' for logging. Transactions will only display on screen.\n");
    }
    else
    {
        get_timestamp(timestamp, sizeof(timestamp));
        fprintf(log_file, "\n======================================================\n");
        fprintf(log_file, "ATM SESSION STARTED at %s\n", timestamp);
        fprintf(log_file, "======================================================\n");
    }
    // --- End File Handling Setup ---

    printf("Welcome to the ATM! (PIN:1234 since it's Demo)\n");

    // PIN Authentication Loop
    while (attempts > 0)
    {
        printf("Enter your 4-digit PIN: ");
        if (scanf("%d", &enteredPin) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n')
                ; // Clear input buffer on error
            continue;
        }

        if (enteredPin == correctPin)
        {
            printf("PIN accepted. Logging in...\n");
            while (getchar() != '\n')
                ; // Clear input buffer
            break;
        }
        else
        {
            attempts--;
            printf("Incorrect PIN. You have %d attempts remaining.\n", attempts);
            if (attempts == 0)
            {
                printf("Too many incorrect attempts. Card retained.\n");
                printf("Thank you for using the ATM! Goodbye.\n");

                if (log_file != NULL)
                {
                    get_timestamp(timestamp, sizeof(timestamp));
                    fprintf(log_file, "Failed login attempts. Session ended at %s.\n", timestamp);
                    fclose(log_file);
                }
                return 0;
            }
        }
    }

    // Check if the loop was broken by a successful login
    if (attempts == 0)
    {
        return 0;
    }

    do
    {
        printf("\n--- ATM Menu ---\n");
        printf("0. OPEN A NEW ACCOUNT\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        // Input validation for choice
        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice input. Please try again.\n");
            while (getchar() != '\n')
                ;
            continue; // Skip to next iteration
        }

        // Get current timestamp for logging before the transaction executes
        get_timestamp(timestamp, sizeof(timestamp));

        switch (choice)
        {
        case 0:
            // Account Creation Logic
            do
            {
                printf("Enter Applicant's Full Name: ");
                // Clear leftover newline from previous scanf (menu choice)
                while (getchar() != '\n')
                    ;

                fgets(name, sizeof(name), stdin);
                // Remove the newline character added by fgets()
                name[strcspn(name, "\n")] = 0;

                printf("Enter Applicant's Email (no spaces): ");
                scanf("%s", email);

                printf("Enter Applicant's Mobile: ");
                scanf("%lld", &mobile);

                printf("\nPlease confirm your details:\n");
                printf("Full Name: %s\n", name);
                printf("Email: %s\n", email);
                printf("Mobile: %lld\n", mobile);

                printf("Are these details correct? (y/n): ");
                // Clear input buffer (leftover from mobile number scanf)
                while (getchar() != '\n')
                    ;
                scanf("%c", &anotherTransaction);

            } while (anotherTransaction != 'y' && anotherTransaction != 'Y');

            printf("A/C no: MH0HDFC%d2025\n", numbers);

            // --- FILE LOGGING: New Account ---
            if (log_file != NULL)
            {
                fprintf(log_file, "\n[%s] NEW ACCOUNT CREATED\n", timestamp);
                fprintf(log_file, "  Name: %s\n", name);
                fprintf(log_file, "  Email: %s\n", email);
                fprintf(log_file, "  Mobile: %lld\n", mobile); // Corrected format specifier for long long
                fprintf(log_file, "  Account Number: MH0HDFC%d2025\n", numbers);
            }
            break;

        case 1:
            printf("Your current balance is: **%ld**\n", balance);
            // --- FILE LOGGING: Check Balance ---
            if (log_file != NULL)
            {
                fprintf(log_file, "[%s] BALANCE CHECKED: Current Balance: %ld\n", timestamp, balance);
            }
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%d", &transactionAmount);

            if (transactionAmount <= 0)
            {
                printf("Withdrawal amount must be positive.\n");
            }
            else if (transactionAmount % 100 != 0)
            {
                printf("Please enter amount in multiples of **100**.\n");
            }
            else if (transactionAmount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                balance -= transactionAmount;
                printf("Transaction successful. Please collect your cash.\n");
                printf("New balance: **%ld**\n", balance);

                // --- FILE LOGGING: Successful Withdrawal ---
                if (log_file != NULL)
                {
                    fprintf(log_file, "[%s] WITHDRAWAL: Amount: -%d | New Balance: %ld\n",
                            timestamp, transactionAmount, balance);
                }
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%d", &transactionAmount);
            if (transactionAmount <= 0)
            {
                printf("Deposit amount must be positive.\n");
            }
            else
            {
                balance += transactionAmount;
                printf("Deposit successful.\n");
                printf("New balance: **%ld**\n", balance);

                // --- FILE LOGGING: Successful Deposit ---
                if (log_file != NULL)
                {
                    fprintf(log_file, "[%s] DEPOSIT: Amount: +%d | New Balance: %ld\n",
                            timestamp, transactionAmount, balance);
                }
            }
            break;

        case 4:
            anotherTransaction = 'n';
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }

        if (anotherTransaction != 'n')
        {
            printf("\nDo you wish to perform another transaction? (y/n): ");

            // Clear input buffer from the previous scanf
            while (getchar() != '\n')
                ;
            scanf("%c", &anotherTransaction);
        }

    } while (anotherTransaction == 'y' || anotherTransaction == 'Y');

    printf("Thank you for using the ATM! Goodbye.\n");

    // --- File Closing ---
    if (log_file != NULL)
    {
        get_timestamp(timestamp, sizeof(timestamp));
        fprintf(log_file, "ATM SESSION ENDED at %s.\n", timestamp);
        fprintf(log_file, "======================================================\n");
        fclose(log_file);
    }
    // --- End File Closing ---

    return 0;
}