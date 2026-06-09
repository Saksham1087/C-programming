#include <stdio.h>
int reversenumber(int num){
    int rev=0;
    while(num>0){
        rev = rev * 10 + (num%10);
        num/=10;
    }
    return rev;
}

int main() {
    int n,reversed;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    reversed=reversenumber(n);

    printf("Reversed number:%d",reversed);
    
    return 0;
}