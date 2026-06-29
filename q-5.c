#include <stdio.h>
#include <string.h>
#define MAX 100
int roll[MAX];
char name[MAX][50];
float marks[MAX];
int n;
void addStudents();
void displayStudents();
void searchStudent();
int main() {
    int choice;
    while (1) {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Students\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addStudents();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("Thank You!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
}
void addStudents() {
    int i;
   printf("Enter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);
        printf("Enter Name: ");
        scanf(" %[^\n]", name[i]);
        printf("Enter Marks: ");
        scanf("%f", &marks[i]);
    }
    printf("\nStudent Records Added Successfully.\n");
}
void displayStudents() {
    int i;
    if (n == 0) {
        printf("No Records Available.\n");
        return;
    }
    printf("\n----------------------------------------------\n");
    printf("Roll No.\tName\t\tMarks\n");
    printf("----------------------------------------------\n");
    for (i = 0; i < n; i++) {
        printf("%d\t\t%-15s%.2f\n", roll[i], name[i], marks[i]);
    }
}
void searchStudent() {
    int i, r;
    printf("Enter Roll Number to Search: ");
    scanf("%d", &r);
    for (i = 0; i < n; i++) {
        if (roll[i] == r) {
            printf("\nStudent Found\n");
            printf("Roll Number : %d\n", roll[i]);
            printf("Name        : %s\n", name[i]);
            printf("Marks       : %.2f\n", marks[i]);
            return;
        }
    }
    printf("Student Not Found.\n");
}
