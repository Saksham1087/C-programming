#include <stdio.h>
 int main(){

float a,p,r,t;

 printf("Enter Principle: ");
 scanf("%f",&p);
 
 
 printf("Enter Rate of interest: ");
 scanf("%f",&r);


printf("Enter Time period: ");
scanf("%f",&t);

a=p*(1+r*t);

printf("\nSimple Interest(final amount): %.2f\n",a);

return 0;
 }