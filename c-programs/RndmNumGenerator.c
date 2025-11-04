#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int numbers;
srand(time(0));
numbers= rand()%100 + 1;
printf("%d",numbers);


    return 0;
}