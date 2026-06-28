#include <stdio.h>
#include <string.h>
#define MAX 100
struct Employee {
    int id;
    char name[50];
    char department[30];
    float salary;
};
struct Employee emp[MAX];
int count = 0;
void addEmployee();
void displayEmployees();
void searchEmployee();
void updateEmployee();
void deleteEmployee();

int main() {
    int choice;

    while (1) {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Employee\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayEmployees();
                break;
            case 3:
                searchEmployee();
                break;
            case 4:
                updateEmployee();
                break;
            case 5:
                deleteEmployee();
                break;
            case 6:
                printf("Thank You!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
}
void addEmployee() {
    printf("Enter Employee ID: ");
    scanf("%d", &emp[count].id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);
    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);
    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);
    count++;
    printf("Employee Added Successfully.\n");
}
void displayEmployees() {
    int i;
    if (count == 0) {
        printf("No Employee Records Found.\n");
        return;
    }
    printf("\n---------------------------------------------------------------\n");
    printf("ID\tName\t\tDepartment\tSalary\n");
    printf("---------------------------------------------------------------\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%-15s%-15s%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }
}
void searchEmployee() {
    int id, i;
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("\nEmployee Found\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            return;
        }
    }
    printf("Employee Not Found.\n");
}
void updateEmployee() {
    int id, i;
    printf("Enter Employee ID to Update: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {
            printf("Enter New Name: ");
            scanf(" %[^\n]", emp[i].name);
            printf("Enter New Department: ");
            scanf(" %[^\n]", emp[i].department);
            printf("Enter New Salary: ");
            scanf("%f", &emp[i].salary);
            printf("Employee Record Updated Successfully.\n");
            return;
        }
    }
    printf("Employee Not Found.\n");
}
void deleteEmployee() {
    int id, i, j;
    printf("Enter Employee ID to Delete: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (emp[i].id == id) {

            for (j = i; j < count - 1; j++) {
                emp[j] = emp[j + 1];
            }
            count--;
            printf("Employee Record Deleted Successfully.\n");
            return;
        }
    }
    printf("Employee Not Found.\n");
}