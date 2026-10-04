#include <stdio.h>
#include <string.h>

int main()
{
    int id[10];
    char name[10][50];
    char type[10][30];
    double value[10];
    char department[10][30];
    char condition[10][20];

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter Asset Details: %d\n", i + 1);

        printf("Enter Asset ID: ");
        scanf("%d", &id[i]);
        getchar();

        printf("Enter Asset Name: ");
        fgets(name[i], sizeof(name[i]), stdin);
        name[i][strcspn(name[i], "\n")] = '\0';

        printf("Enter Asset Type: ");
        fgets(type[i], sizeof(type[i]), stdin);
        type[i][strcspn(type[i], "\n")] = '\0';

        printf("Enter Asset Value: ");
        scanf("%lf", &value[i]);
        getchar();

        printf("Enter Department: ");
        fgets(department[i], sizeof(department[i]), stdin);
        department[i][strcspn(department[i], "\n")] = '\0';

        printf("Enter Condition: ");
        fgets(condition[i], sizeof(condition[i]), stdin);
        condition[i][strcspn(condition[i], "\n")] = '\0';
    }

    for (int i = 0; i < 10; i++)
    {
        printf("\n--- Asset Details %d ---\n", i + 1);

        printf("ID: %d\n", id[i]);
        printf("Name: %s\n", name[i]);
        printf("Type: %s\n", type[i]);
        printf("Value: N$%.2lf\n", value[i]);
        printf("Department: %s\n", department[i]);
        printf("Condition: %s\n", condition[i]);
    }

    return 0;
}++++++++++++
