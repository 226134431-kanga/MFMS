#include <stdio.h>
#include <string.h>
#include "budget.h"

void budgetMenu(void){

    char departmentName[10][100];
    double allocatedBudget[10];
    double expenditure[10];
    double remainingBudget[10];

    for (int i = 0;i<10;i++) {
    printf("\nEnter information for Departments %d\n", i + 1);
    
    printf("Enter Department Name: ");
    fgets(departmentName[i], sizeof(departmentName[i]), stdin);
    
    departmentName[i][strcspn(departmentName[i], "\n")] = '\0';

    printf("Enter Budget: N$");
    scanf("%lf", &allocatedBudget[i]);

    printf("Enter Expenditure: N$");
    scanf("%lf", &expenditure[i]);
    
    getchar();

    remainingBudget[i] = allocatedBudget[i] - expenditure[i];
    }

    printf("\n\n====DEPARTMENT BUDGET REPORT====\n");

    for(int i=0; i <10; i++){
    printf("\n name: %s\n", departmentName[i]);
    printf("allocatedBudget: N$%.2f\n", allocatedBudget[i]);
    printf("Expenditure: N$%.2f\n", expenditure[i]);
    printf("remainingBudget: N$%.2f\n", remainingBudget[i]);


    if (expenditure[i] <= allocatedBudget[i]){ 
        printf("Status: WITHIN BUDGET\n");
    } else {
        printf("Status: OVER BUDGET\n");
    }

}   

}
