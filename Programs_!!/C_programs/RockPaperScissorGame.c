#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to get the full name of the choice
const char *choice_name(char choice)
{
    if (choice == 'r')
        return "Rock 🪨";
    if (choice == 'p')
        return "Paper 📃";
    if (choice == 's')
        return "Scissors ✂️";
    return "Invalid Choice";
}

int main()
{
    char you, pc; // Removed you_raw as we no longer need to separate raw input
    int pc_choice_num;

    // --- Setup and PC Choice ---
    // Seed the random number generator
    srand(time(0));
    // Generate a random number: 0 for Rock, 1 for Paper, 2 for Scissors
    pc_choice_num = rand() % 3;

    if (pc_choice_num == 0)
    {
        pc = 'r';
    }
    else if (pc_choice_num == 1)
    {
        pc = 'p';
    }
    else
    {
        pc = 's';
    }

    // --- User Input ---
    printf("==========================================\n");
    printf("     Welcome to Rock, Paper, Scissors!    \n");
    printf("==========================================\n\n");
    printf("Choose your weapon (must be lowercase):\n");
    printf("  - **Rock (r)\n");
    printf("  - **Paper (p)\n");
    printf("  - **Scissors (s)\n");
    printf("------------------------------------------\n");

    // Loop until a valid lowercase choice is entered
    do
    {
        printf("Enter your choice (r/p/s): ");
        // Note the space before %c to consume any leading whitespace
        if (scanf(" %c", &you) != 1)
        {
            // Clear input buffer on failure
            int c;
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            continue; // Skip the rest of the loop
        }
        // The condition now strictly checks for lowercase 'r', 'p', or 's'
    } while (you != 'r' && you != 'p' && you != 's' && printf("Invalid choice! Please enter **lowercase** 'r', 'p', or 's'.\n"));

    // --- Display Choices ---
    printf("\n--- Result ---\n");
    printf("You chose: **%s**\n", choice_name(you));
    printf("PC chose:  **%s**\n", choice_name(pc));
    printf("----------------\n");

    // --- Determine Winner ---

    // Check for a Draw first
    if (you == pc)
    {
        printf("🤝 **Game Draw!** It was a tie.\n");
    }
    // All possible winning conditions for the user
    else if ((you == 'r' && pc == 's') || // Rock beats Scissors
             (you == 'p' && pc == 'r') || // Paper beats Rock
             (you == 's' && pc == 'p'))   // Scissors beats Paper
    {
        printf("🎉 **You Won!** Congratulations!\n");
    }
    // All other cases must be a loss for the user
    else
    {
        printf("💔 **You Lose!** Better luck next time.\n");
    }

    printf("==========================================\n");

    return 0;
}