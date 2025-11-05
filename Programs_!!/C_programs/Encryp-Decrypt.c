#include <stdio.h>
#include <string.h>


struct Employee {
    int id;
    char name[50];
    char designation[50];
    float salary;
};


#define MAX_EMPLOYEES 100
struct Employee employees[MAX_EMPLOYEES];
int numEmployees = 0;


void addEmployee() {
    if (numEmployees < MAX_EMPLOYEES) {
        printf("Enter Employee ID: ");
        scanf("%d", &employees[numEmployees].id);
        printf("Enter Employee Name: ");
        scanf("%s", employees[numEmployees].name); 
        printf("Enter Employee Designation: ");
        scanf("%s", employees[numEmployees].designation);
        printf("Enter Employee Salary: ");
        scanf("%f", &employees[numEmployees].salary);
        numEmployees++;
        printf("Employee added successfully!\n");
    } else {
        printf("Maximum number of employees reached.\n");
    }
}


void viewEmployees() {
    if (numEmployees == 0) {
        printf("No employees to display.\n");
        return;
    }
    printf("\n--- Employee List ---\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("ID: %d, Name: %s, Designation: %s, Salary: %.2f\n",
               employees[i].id, employees[i].name, employees[i].designation, employees[i].salary);
    }
    printf("---------------------\n");
}


void searchEmployee() {
    int searchId;
    printf("Enter Employee ID to search: ");
    scanf("%d", &searchId);
    int found = 0;
    for (int i = 0; i < numEmployees; i++) {
        if (employees[i].id == searchId) {
            printf("\nEmployee Found:\n");
            printf("ID: %d, Name: %s, Designation: %s, Salary: %.2f\n",
                   employees[i].id, employees[i].name, employees[i].designation, employees[i].salary);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Employee with ID %d not found.\n", searchId);
    }
}


int main() {
    int choice;
    do {
        printf("\n--- Employee Management System ---\n");
        printf("1. Add Employee\n");
        printf("2. View All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                viewEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}