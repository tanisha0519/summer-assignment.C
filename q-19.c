#include <stdio.h>
#include <string.h>
struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};
int main()
{
    struct Employee emp[100];
    int count = 0, choice, i, id, found;
    while (1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[count].id);
                printf("Enter Employee Name: ");
                scanf(" %[^\n]", emp[count].name);
                printf("Enter Department: ");
                scanf(" %[^\n]", emp[count].department);
                printf("Enter Salary: ");
                scanf("%f", &emp[count].salary);
                count++;
                printf("Employee added successfully.\n");
                break;
            case 2:
                if (count == 0)
                {
                    printf("No employee records available.\n");
                }
                else
                {
                    printf("\n----- Employee Details -----\n");
                    for (i = 0; i < count; i++)
                    {
                        printf("\nEmployee ID : %d\n", emp[i].id);
                        printf("Name        : %s\n", emp[i].name);
                        printf("Department  : %s\n", emp[i].department);
                        printf("Salary      : %.2f\n", emp[i].salary);
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
                        printf("ID         : %d\n", emp[i].id);
                        printf("Name       : %s\n", emp[i].name);
                        printf("Department : %s\n", emp[i].department);
                        printf("Salary     : %.2f\n", emp[i].salary);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee not found.\n");
                break;
            case 4:
                printf("Enter Employee ID to Update: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (emp[i].id == id)
                    {
                        printf("Enter New Name: ");
                        scanf(" %[^\n]", emp[i].name);
                        printf("Enter New Department: ");
                        scanf(" %[^\n]", emp[i].department);
                        printf("Enter New Salary: ");
                        scanf("%f", &emp[i].salary);
                        printf("Employee record updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee not found.\n");
                break;
            case 5:
                printf("Enter Employee ID to Delete: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (emp[i].id == id)
                    {
                        int j;
                        for (j = i; j < count - 1; j++)
                        {
                            emp[j] = emp[j + 1];
                        }
                        count--;
                        printf("Employee record deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Employee not found.\n");
                break;
            case 6:
                printf("Exiting Employee Management System...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}