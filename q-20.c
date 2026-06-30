#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, netSalary;
};
int main()
{
    struct Employee emp[100];
    int count = 0, choice, i, id, found;
    while (1)
    {
        printf("\n===== SALARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Calculate Net Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[count].id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[count].name);
                printf("Enter Basic Salary: ");
                scanf("%f", &emp[count].basic);
                printf("Enter HRA: ");
                scanf("%f", &emp[count].hra);
                printf("Enter DA: ");
                scanf("%f", &emp[count].da);
                emp[count].netSalary = emp[count].basic +
                                       emp[count].hra +
                                       emp[count].da;
                count++;
                printf("Employee added successfully.\n");
                break;
            case 2:
                if (count == 0)
                {
                    printf("No employee records found.\n");
                }
                else
                {
                    printf("\n----- Employee Details -----\n");
                    for (i = 0; i < count; i++)
                    {
                        printf("\nEmployee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Basic Salary: %.2f\n", emp[i].basic);
                        printf("HRA         : %.2f\n", emp[i].hra);
                        printf("DA          : %.2f\n", emp[i].da);
                        printf("Net Salary  : %.2f\n", emp[i].netSalary);
                    }
                }
                break;
            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (emp[i].id == id)
                    {
                        printf("\nEmployee Found!\n");
                        printf("ID          : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Basic Salary: %.2f\n", emp[i].basic);
                        printf("HRA         : %.2f\n", emp[i].hra);
                        printf("DA          : %.2f\n", emp[i].da);
                        printf("Net Salary  : %.2f\n", emp[i].netSalary);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee not found.\n");
                break;
            case 4:
                printf("\n----- Net Salary Report -----\n");
                for (i = 0; i < count; i++)
                {
                    emp[i].netSalary = emp[i].basic +
                                       emp[i].hra +
                                       emp[i].da;
                    printf("Employee: %s | Net Salary: %.2f\n",
                           emp[i].name, emp[i].netSalary);
                }
                break;
            case 5:
                printf("Exiting Salary Management System...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}