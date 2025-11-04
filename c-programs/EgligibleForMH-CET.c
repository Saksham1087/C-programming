#include <stdio.h>

int main() {
    int subject1_marks, subject2_marks, subject3_marks;
    int total_marks;
    float percentage;

    
    printf("Enter marks for Physics (out of 100): ");
    scanf("%d", &subject1_marks);

    printf("Enter marks for Chemistry (out of 100): ");
    scanf("%d", &subject2_marks);

    printf("Enter marks for Mathematics (out of 100): ");
    scanf("%d", &subject3_marks);

    
    total_marks = subject1_marks + subject2_marks + subject3_marks;
    percentage = (float)total_marks / 300 * 100; 

    
    if (subject1_marks >= 33 && subject2_marks >= 33 && subject3_marks >= 33 && percentage >= 40) {
        printf("\n\nEgligible: YES\n");
        printf("CONGRATULATION !!!\nTotal marks you got:%d & Percentage:%.2f%",total_marks,percentage);
        
    } else {
        printf("\n\nEgligible: NO\n");
        printf("Total marks you got:%d & Percentage:%.2f%\nMin. marks required 135 i.e 45%",total_marks,percentage);
        
    }

    return 0;
}