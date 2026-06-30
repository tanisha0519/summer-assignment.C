#include <stdio.h>
#include <string.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};
int main()
{
    struct Book book[100];
    int count = 0, choice, i, id, found;
    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &book[count].id);
                printf("Enter Book Title: ");
                scanf(" %[^\n]", book[count].title);
                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[count].author);
                book[count].issued = 0;
                count++;
                printf("Book added successfully.\n");
                break;
            case 2:
                if (count == 0)
                {
                    printf("No books available.\n");
                }
                else
                {
                    printf("\n--- Book List ---\n");
                    for (i = 0; i < count; i++)
                    {
                        printf("\nBook ID : %d\n", book[i].id);
                        printf("Title   : %s\n", book[i].title);
                        printf("Author  : %s\n", book[i].author);
                        if (book[i].issued == 0)
                            printf("Status  : Available\n");
                        else
                            printf("Status  : Issued\n");
                    }
                }
                break;
            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (book[i].id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("Title  : %s\n", book[i].title);
                        printf("Author : %s\n", book[i].author);
                        if (book[i].issued == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Book not found.\n");
                break;
            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &id);
                found = 0;
                for (i = 0; i < count; i++)
                {
                    if (book[i].id == id)
                    {
                        if (book[i].issued == 0)
                        {
                            book[i].issued = 1;
                            printf("Book issued successfully.\n");
                        }
                        else
                        {
                            printf("Book is already issued.\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Book not found.\n");
                break;
            case 5:
                printf("Exiting Library Management System...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}