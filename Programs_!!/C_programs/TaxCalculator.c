#include <stdio.h>
int main(){
    float salary, pay = 0;
    printf("Enter your Annual Salary: ");
    scanf("%f",&salary);

    if(salary <= 250000){
        printf("\nNO TAX BRO !!! i.e\n");
        pay = 0;
    }
    else if(salary > 250000 && salary <= 500000){
        printf("\nYou have to pay tax of 5%%  i.e\n");
        pay = 0.05 * salary;
    }
    else if(salary > 500000 && salary <= 1000000){
        printf("\nYou have to pay tax of 20%% i.e\n");
        pay = 0.20 * salary;
    }
    else{
        printf("\nYou have to pay tax of 30%% i.e\n");
        pay = 0.30 * salary;
    }
    printf("Income Tax you have to pay:₹%.2f", pay);
    return 0;
}
