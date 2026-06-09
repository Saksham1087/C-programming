
#include <stdio.h>
int main() {
    int l,b,a;
     printf("Enter the length of the rectangle: ");
     scanf("%d", &l);

    
    printf("Enter the breadth of the rectangle: ");
     scanf("%d", &b);

    a = l * b;
    
    printf("Area of the rectangle:%d sq.unit\n",a);
    
    
    return 0;
}