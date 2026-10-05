#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "suppliers.h"
#include "assets.h"
#include "reports.h"
#include "validation.h"

int main(void)
{
    int choice;

    do
    {
        printf("\n======================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
        printf("======================================\n");
        printf("1. Employee Management\n");
        printf("2. Budget Management\n");
        printf("3. Supplier Management\n");
        printf("4. Asset Management\n");
        printf("5. Reports\n");
        printf("0. Exit\n");

        printf("\nEnter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            while (getchar() != '\n')
            {
            }

            printf("Invalid input. Enter a number from 0 to 5.\n");
            choice = -1;
            continue;
        }

        while (getchar() != '\n')
        {
        }

        if (!validChoice(choice, 0, 5))
        {
            printf("Invalid choice. Enter a number from 0 to 5.\n");
            continue;
        }

        switch (choice)
        {
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
                printf("Goodbye.\n");
                break;
        }

    } while (choice != 0);

    return 0;
}