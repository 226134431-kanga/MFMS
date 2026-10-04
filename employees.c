#include <stdio.h>
#include <string.h>

int main()
{
    int employeeID[10];
    char name[10][50];
    char department[10][60];
    char jobTitle[10][30];
    double basicSalary[10];
    double housingAllowance[10];
    double transportAllowance[10];
    double otherAllowances[10];
    double taxDeduction = 0.15;
    double grossSalary[10];
    double netSalary[10];
    int search;
    int found;
    int choice;
    int count;

    printf("=========== EMPLOYEE MANAGEMENT =============\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\n--- Employee %d ---\n", i + 1);

        printf("Enter name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter department: ");
        fgets(department[i], sizeof(department[i]), stdin);
        department[i][strcspn(department[i], "\n")] = '\0';

        printf("Enter job title: ");
        fgets(jobTitle[i], sizeof(jobTitle[i]), stdin);
        jobTitle[i][strcspn(jobTitle[i], "\n")] = '\0';

        printf("Enter employee ID: ");
        scanf("%d", &employeeID[i]);

        printf("Enter basic salary: ");
        scanf("%lf", &basicSalary[i]);

        printf("Enter housing allowance: ");
        scanf("%lf", &housingAllowance[i]);

        printf("Enter transport allowance: ");
        scanf("%lf", &transportAllowance[i]);

        printf("Enter other allowances: ");
        scanf("%lf", &otherAllowances[i]);

        while ((count = getchar()) != '\n' && count != EOF)
        {
        }

        grossSalary[i] = basicSalary[i] + housingAllowance[i] + transportAllowance[i] + otherAllowances[i];
        netSalary[i]   = grossSalary[i] * (1.0 - taxDeduction);

        printf("\nGross salary: %.2lf", grossSalary[i]);
        printf("\nNet salary:   %.2lf", netSalary[i]);
        printf("\n-----------------------------\n");
    }

    /* The user decides whether to search; the menu repeats until they choose No */
    do
    {
        printf("\nDo you want to search for an employee?\n");
        printf("1. Yes, search\n");
        printf("2. No, exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter ID to search: ");
                scanf("%d", &search);
                found = 0;

                for (int i = 0; i < 10; i++)
                {
                    if (employeeID[i] == search)
                    {
                        printf("\nEmployee ID %d found\n", employeeID[i]);
                        printf("Name: %s\n", name[i]);
                        printf("Department: %s\n", department[i]);
                        printf("Job title: %s\n", jobTitle[i]);
                        printf("Gross salary: %.2lf\n", grossSalary[i]);
                        printf("Net salary: %.2lf\n", netSalary[i]);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    printf("Employee not found.\n");
                }
                break;

            case 2:
                printf("Search skipped. Goodbye.\n");
                break;

            default:
                printf("Invalid choice. Please enter 1 or 2.\n");
        }
    } while (choice != 2);

    return 0;
}
