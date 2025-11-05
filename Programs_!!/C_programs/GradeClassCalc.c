#include <stdio.h>
int main(){
float a;


printf("Enter Percentage of HSC: ");
scanf("%f",&a);

   if(a >=75 && a <=100){
   printf("Distinct Passed");}
   
   else if(a >=60 && a <=74){
   printf("First Class Passed");}

   else if(a >=36 && a <=59){
   printf("Second Class Passed");}

   else if(a==35){
   printf("Just Passed");}
   
   else{
   printf("Failed...Better Luck Next Time");}
   
   return 0;
}