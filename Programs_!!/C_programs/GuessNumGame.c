#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int numbers,guess,nguesses=1;
srand(time(0));
numbers= rand()%100 + 1;

printf("\nI have chosen a number between 1 and 100. Try to guess it!\n");
do{
    
    
    printf("\nEnter your guess: ");
    scanf("%d",&guess);
    printf("\n");
    
    if(guess>numbers){
        printf("Lower No. PLEASE !!\n");
    }
    else if(guess<numbers){
        printf("Higher No. PLEASE !!\n");
    }
    else{
        printf("🎉 You guessed it in %d attempt(s)!\n\n",nguesses);
        printf("Thanks for playing! Goodbye 👋\n");
    }
    nguesses++;
}while(guess!=numbers);

    return 0;
}