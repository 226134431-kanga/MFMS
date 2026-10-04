#include <stdio.h>

void EmployeeReport(double salaries[], 
                    int count);

void BudgetReport(char departmentName[][100], 
                double remainingBudget[], 
                double expenditure[], 
                double allocation[], 
                int count);

void SupplierReport(char ID[][50],
                    char name[][10],
                    char email[][50], 
                    char telephone[][20], 
                    char town[][50], int 
                    count);

void AssetReport(int id[], 
                char name[][50], 
                char type[][30], 
                char department[][30], 
                char condition[][20], 
                double value[], 
                int count);


int main()
{
    char input[100];
    int choice;

    double salaries[10];

    char departmentName[10][100];
    double remainingBudget[10];
    double expenditure[10];
    double allocation[10];

    char ID[10][50];
    char name[10][10];
    char email[10][50];
    char telephone[10][20];
    char town[10][50];

    int id[10];
    char assetName[10][50];
    char type[10][30];
    char department[10][30];
    char condition[10][20];
    double value[10];


    do
    {
        printf("\n=== MUNICIPAL REPORTS ===\n");
        printf("1. Employee Report\n");
        printf("2. Budget Report\n");
        printf("3. Supplier Report\n");
        printf("4. Asset Report\n");
        printf("5. Display All Reports\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

      
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            break;
        }

        if (input[0] < '0' || input[0] > '5' || (input[1] != '\n' && input[1] != '\0'))
        {
            printf("Invalid input. Enter one digit from 0 to 5.\n");
            choice = -1;
            continue;
        }

        choice = input[0] - '0';


        if (choice == 1 || choice == 5)
        {
            EmployeeReport(salaries, 10);
        }


        if (choice == 2 || choice == 5)
        {
            BudgetReport(departmentName, remainingBudget, expenditure, allocation, 10);
        }


        if (choice == 3 || choice == 5)
        {
            SupplierReport(ID, name, email, telephone, town, 10);
        }

        if (choice == 4 || choice == 5)
        {
            AssetReport(id, assetName, type, department, condition, value, 10);
        }

        if (choice == 0)
        {
            printf("\n\n=============CLOSING......REPORT==============\n");
        }

    } while (choice != 0);

    return 0;
}


void EmployeeReport(double salaries[], 
                    int count)
{
    double total = 0.0;
    double average;
    double highest = salaries[0];
    double lowest = salaries[0];

    for (int i = 0; i < count; i++)
    {
        total += salaries[i];

        if (salaries[i] > highest)
        {
            highest = salaries[i];
        }

        if (salaries[i] < lowest)
        {
            lowest = salaries[i];
        }
    }

    average = total / count;

    printf("\n======================EMPLOYEE MANAGEMENT REPORT===================\n");
    printf("Total Employees: %d\n", count);
    printf("Average Gross Salary: N$%.2lf\n", average);
    printf("Highest Gross Salary: N$%.2lf\n", highest);
    printf("Lowest Gross Salary: N$%.2lf\n", lowest);
}


void BudgetReport(char departmentName[][100], 
                  double remainingBudget[], 
                  double expenditure[], 
                  double allocation[], 
                  int count)
{
    double totalAllocation = 0.0;
    double totalExpenditure = 0.0;
    double totalRemaining = 0.0;
    int exceeded = 0;

    printf("\n======================BUDGET MANAGEMENT REPORT======================\n");

    for (int i = 0; i < count; i++)
    {
        remainingBudget[i] = allocation[i] - expenditure[i];

        totalAllocation += allocation[i];
        totalExpenditure += expenditure[i];
        totalRemaining += remainingBudget[i];

        printf("\nDepartment: %s\n", departmentName[i]);
        printf("Allocated Budget: N$%.2lf\n", allocation[i]);
        printf("Expenditure: N$%.2lf\n", expenditure[i]);
        printf("Remaining Budget: N$%.2lf\n", remainingBudget[i]);

        if (remainingBudget[i] < 0)
        {
            printf("Status: OVER BUDGET\n");
        }
        else
        {
            printf("Status: WITHIN BUDGET\n");
        }
    }

    printf("\nTotal Allocated Budget: N$%.2lf\n",
           totalAllocation);

    printf("Total Expenditure: N$%.2lf\n",
           totalExpenditure);

    printf("Total Remaining Budget: N$%.2lf\n",
           totalRemaining);

    printf("\nDepartments exceeding budget:\n");

    for (int i = 0; i < count; i++)
    {
        if (expenditure[i] > allocation[i])
        {
            printf("%s: exceeded by N$%.2lf\n",
                   departmentName[i],
                   expenditure[i] - allocation[i]);

            exceeded++;
        }
    }

    if (exceeded == 0)
    {
        printf("None.\n");
    }
}


void SupplierReport(char ID[][50], 
                    char name[][10], 
                    char email[][50], 
                    char telephone[][20], 
                    char town[][50], 
                    int count)
{
    printf("\n================== SUPPLIER MANAGEMENT REPORT===================\n");
    printf("Total Suppliers: %d\n", count);

    for (int i = 0; i < count; i++)
    {
        printf("\nSupplier ID: %s\n", ID[i]);
        printf("Name: %s\n", name[i]);
        printf("Email: %s\n", email[i]);
        printf("Telephone: %s\n", telephone[i]);
        printf("Town: %s\n", town[i]);
    }
}


void AssetReport(int id[],
                char name[][50], 
                char type[][30], 
                char department[][30], 
                char condition[][20], 
                double value[], 
                int count)
{
    double totalvalue = 0.0;

    printf("\n================= ASSET MANAGEMENT REPORT ====================\n");
    printf("Total Assets: %d\n", count);

    for (int i = 0; i < count; i++)
    {
        printf("\nAsset ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Type: %s\n", type[i]);
        printf("Purchase Value: N$%.2lf\n", value[i]);
        printf("Department: %s\n", department[i]);
        printf("Condition: %s\n", condition[i]);

        totalvalue += value[i];
    }

    printf("\nTotal Asset Purchase Value: N$%.2lf\n", totalvalue);
}
