#include <stdio.h>


float ConvertToFarenheit(float num1) {
    float farenheit = (num1 * 9 / 5) + 32; ;
    
    
    return farenheit;
}

int main() {
    float number1;
    float result;

    
    printf("Enter the temperature in celcius: ");
    scanf("%f", &number1);

    result = ConvertToFarenheit(number1);

    
    printf("The given Celcius i.e %.2f °C in Farenheit is %.2f °F\n",number1,result);

    return 0;
}