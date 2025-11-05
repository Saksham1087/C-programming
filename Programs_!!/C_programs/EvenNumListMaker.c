#include <stdio.h>

int main() {
  int i,n;
  
  
   printf("Enter a no. till where you want even no. : ");
  scanf("%d",&n);
  printf("\n");
  
  
  for (i = 0; i <= n; i+=2) {
    printf("%d\n", i);
  }
  
  return 0;
}