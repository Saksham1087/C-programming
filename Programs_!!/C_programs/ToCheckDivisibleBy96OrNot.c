#include <stdio.h>
int main() {
int a;

printf("Check whether the Number is divisible by 96: ");
scanf("%d", &a);

if (a % 96 == 0) {
printf("YES !!! %d is divisible by 96", a);
  }

else {
printf("NO !!! %d is not divisible by 96", a);
  }

return 0;
}