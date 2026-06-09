#include <stdio.h>

int main() {
    
    int n,prime=1;
    
    printf("Enter the number to check whether the number is prime or not : ");
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
        if(n%i==0){
            prime=0;
            break;
        }
        else{
            prime=1;
        }
    }
    if(prime==0){
        printf("THE GIVEN NUMBER IS NOT A PRIME NUMBER");
    }
    else{
        printf("THE GIVEN NUMBER IS A PRIME NUMBER");
    }

    return 0;
}