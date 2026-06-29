#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100], temp[100];
    int choice;
    while (1) {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();   
        switch (choice) {
            case 1:
                printf("Enter a String: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Length of String = %lu\n", strlen(str1));
                break;
            case 2:
                printf("Enter a String: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(temp, str1);
                printf("Copied String = %s\n", temp);
                break;
            case 3:
                printf("Enter First String: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter Second String: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                strcat(str1, str2);
                printf("Concatenated String = %s\n", str1);
                break;
            case 4:
                printf("Enter First String: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                printf("Enter Second String: ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';
                if (strcmp(str1, str2) == 0)
                    printf("Both Strings are Equal.\n");
                else
                    printf("Strings are Not Equal.\n");
                break;
            case 5:
                printf("Enter a String: ");
                fgets(str1, sizeof(str1), stdin);
                str1[strcspn(str1, "\n")] = '\0';
                strcpy(temp, str1);
                strrev(temp);     
                printf("Reversed String = %s\n", temp);
                break;
            case 6:
                printf("Thank You!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
    return 0;
}
