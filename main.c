#include <stdio.h>
#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"
#include "reports.h"

int main() {

    int choice;
    
    printf("======================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("======================================\n");
    printf("1. Employee Management\n");
    printf("2. Budget Management\n");
    printf("3. Supplier Management\n");
    printf("4. Asset Management\n");
    printf("5. Reports\n");
    printf("0. Exit\n");

    printf("\nEnter your choice: \n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
        employeeMenu();
        break;

        case 2:
        budgetMenu();
        break;

        case 3:
        supplierMenu();
        break;

        case 4:
        assetMenu();
        break;

        case 5:
        reportsMenu();
        break;

        case 0:
        printf("Bye\n");
        break;

        default:
        printf("Invalid choice");
    }
    
    return 0;
}
