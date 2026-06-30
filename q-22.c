#include <stdio.h>
int main()
{
    char name[50];
    int rollNo;
    int marks[5];
    int i, total = 0;
    float percentage;
    char grade;
    printf("===== MARKSHEET GENERATION SYSTEM =====\n");
    printf("Enter Student Name: ");
    scanf(" %[^\n]", name);
    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    percentage = total / 5.0;
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 40)
        grade = 'D';
    else
        grade = 'F';
    printf("\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", name);
    printf("Roll Number  : %d\n", rollNo);
    for(i = 0; i < 5; i++)
    {
        printf("Subject %d Marks : %d\n", i + 1, marks[i]);
    }
    printf("-------------------------------\n");
    printf("Total Marks : %d/500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);
    if (grade == 'F')
        printf("Result      : Fail\n");
    else
        printf("Result      : Pass\n");
    return 0;
}