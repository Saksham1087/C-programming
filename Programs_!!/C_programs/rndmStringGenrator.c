#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random string
void generateRandomString(char *str, int length) {
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charsetSize = sizeof(charset) - 1; // Exclude null terminator

    if (length <= 0) {
        str[0] = '\0';
        return;
    }

    for (int i = 0; i < length; i++) {
        str[i] = charset[rand() % charsetSize];
    }
    str[length] = '\0';
}

int main() {
    char message[100];
    int key, fbkey;
    char feedb;

    printf("Enter the message: ");
    scanf("%s", message); 

    printf("Enter the key (an integer): ");
    scanf("%d", &key);

    srand(time(NULL)); // Seed random number generator

    int stringLength = 10;
    char randomString[stringLength + 1];

    generateRandomString(randomString, stringLength);

    
    printf("Encrypted Message: %s\n", randomString);

    printf("DO YOU WANNA DECRYPT THE { %s } MESSAGE (y/n): ",randomString);
    scanf(" %c", &feedb); 

    if (feedb == 'y') {
        printf("Enter the key (an integer): ");
        scanf("%d", &fbkey);

        if (key == fbkey) {
            printf("Decrypted Message: %s\n", message);
        } else {
            printf("WRONG PASS KEY\n");
        }
    } else {
        printf("THANK YOU SO MUCH...\n");
    }

    return 0;
}
