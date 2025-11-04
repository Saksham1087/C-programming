#include <stdio.h>

int main() {
  int sum = 0;
  int i,c;
  
  printf("Enter a no. till where you want sum of: ");
  scanf("%d",&c);
  
  printf("\n");

  for (i = 1; i <= c; i++) {
    sum = sum + i;
  }

  printf("Sum is %d", sum);
  
  return 0;
}