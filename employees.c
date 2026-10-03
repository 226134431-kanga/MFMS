#include <stdio.h>
#include "employees.h"

void addEmployee(void)      { printf("addEmployee: not implemented yet.\n"); }
void displayEmployees(void) { printf("displayEmployees: not implemented yet.\n"); }
void searchEmployee(void)   { printf("searchEmployee: not implemented yet.\n"); }
void calculateSalary(void)  { printf("calculateSalary: not implemented yet.\n"); }

void employeeMenu(void)
{
    int choice = 0;

    do {
        printf("\n--- EMPLOYEE MANAGEMENT ---\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Calculate Salary\n");
        printf("5. Back to Main Menu\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            while (getchar() != '\n') { }
            printf("Invalid input. Please enter a number 1-5.\n");
            choice = 0;
            continue;
        }
        while (getchar() != '\n') { }

        switch (choice) {
            case 1: addEmployee();      break;
            case 2: displayEmployees(); break;
            case 3: searchEmployee();   break;
            case 4: calculateSalary();  break;
            case 5: break;
            default: printf("Invalid choice. Please enter 1-5.\n");
        }
    } while (choice != 5);
}
