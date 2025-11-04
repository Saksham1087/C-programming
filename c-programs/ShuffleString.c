#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Function to shuffle a string randomly
void shuffleString(char *str) {
    int n = strlen(str);
    if (n <= 1) { // No need to shuffle if string has 0 or 1 character
        return;
    }

    // Seed the random number generator
    srand(time(NULL));

    // Perform Fisher-Yates shuffle
    for (int i = n - 1; i > 0; i--) {
        // Generate a random index j such that 0 <= j <= i
        int j = rand() % (i + 1);

        // Swap characters at indices i and j
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char myString[100]; // Declare a character array to store the string

    printf("Enter a message: ");
    fgets(myString, sizeof(myString), stdin);

    // Remove the trailing newline character if present
    myString[strcspn(myString, "\n")] = 0;

    

    shuffleString(myString);

    printf("Encrycted Message: %s\n", myString);

    return 0;
}