#include <stdio.h>
#include <string.h>
struct Student
{
    int roll;
    char name[50];
    float marks;
};
int main()
{
    struct Student s[100];
    int count = 0, choice, i, roll, found;
    while (1)
    {
        printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display All Records\n");
        printf("3. Search Student\n");
        printf("4. Update Student Record\n");
        printf("5. Delete Student Record\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[count].roll);
                printf("Enter Student Name: ");
                scanf(" %[^\n]", s[count].name);
                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);
                count++;
                printf("Student record added successfully.\n");
                break;
            case 2:
                if (count == 0)
                {
                    printf("No records found.\n");
                }
                else
                {
                    printf("\n----- Student Records -----\n");
                    for (i = 0; i < count; i++)
                    {
                        printf("\nRoll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                    }
                }
                break;
            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (s[i].roll == roll)
                    {
                        printf("\nStudent Found!\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Marks       : %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student record not found.\n");
                break;
            case 4:
                printf("Enter Roll Number to Update: ");
                scanf("%d", &roll);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (s[i].roll == roll)
                    {
                        printf("Enter New Name: ");
                        scanf(" %[^\n]", s[i].name);
                        printf("Enter New Marks: ");
                        scanf("%f", &s[i].marks);
                        printf("Record updated successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student record not found.\n");
                break;
            case 5:
                printf("Enter Roll Number to Delete: ");
                scanf("%d", &roll);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (s[i].roll == roll)
                    {
                        int j;
                        for (j = i; j < count - 1; j++)
                        {
                            s[j] = s[j + 1];
                        }
                        count--;
                        printf("Student record deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Student record not found.\n");
                break;
            case 6:
                printf("Exiting Student Record Management System...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}