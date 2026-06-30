#include <stdio.h>
#include <string.h>
struct Contact
{
    char name[50];
    char phone[15];
};
int main()
{
    struct Contact contacts[100];
    int count = 0;
    int choice, i, found;
    char searchName[50];
    while (1)
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Name: ");
                scanf(" %[^\n]", contacts[count].name);
                printf("Enter Phone Number: ");
                scanf("%s", contacts[count].phone);
                count++;
                printf("Contact added successfully.\n");
                break;
            case 2:
                if (count == 0)
                {
                    printf("No contacts available.\n");
                }
                else
                {
                    printf("\n--- Contact List ---\n");
                    for (i = 0; i < count; i++)
                    {
                        printf("Contact %d\n", i + 1);
                        printf("Name : %s\n", contacts[i].name);
                        printf("Phone: %s\n\n", contacts[i].phone);
                    }
                }
                break;
            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", searchName);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (strcmp(contacts[i].name, searchName) == 0)
                    {
                        printf("Contact Found!\n");
                        printf("Name : %s\n", contacts[i].name);
                        printf("Phone: %s\n", contacts[i].phone);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Contact not found.\n");
                break;
            case 4:
                printf("Enter Name to Delete: ");
                scanf(" %[^\n]", searchName);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (strcmp(contacts[i].name, searchName) == 0)
                    {
                        int j;
                        for (j = i; j < count - 1; j++)
                        {
                            contacts[j] = contacts[j + 1];
                        }
                        count--;
                        printf("Contact deleted successfully.\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Contact not found.\n");
                break;
            case 5:
                printf("Exiting Contact Management System...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}