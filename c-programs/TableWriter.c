#include <stdio.h>

int main() {
  int number;
  int i;
  
  printf("Enter a no. of which you want me to write table for u: ");
  scanf("%d",&number);
  printf("\n");

 
  for (i = 1; i <= 10; i++) {
    printf("%d x %d = %d\n", number, i, number * i);
  }

  return 0;
}