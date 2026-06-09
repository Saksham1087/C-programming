#include <stdio.h>

int reverseNumber(int num) {
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int n, temp, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }

    int reversedSum = reverseNumber(sum);

    if (sum * reversedSum == n) {
        printf("%d is a magic number.\n", n);
    } else {
        printf("%d is not a magic number.\n", n);
    }

    return 0;
}