#include <stdio.h>

int main() {
  int i, j ,d;
  
  printf("Enter a no. till where you want me to write table for u: ");
  scanf("%d",&d);
  printf("\n");

  for (i = 1; i <= 10; i++) {
    for (j = 1; j <= d; j++) {
      printf("%d ", i * j);
    }
    printf("\n");
  }
  
  return 0;
}