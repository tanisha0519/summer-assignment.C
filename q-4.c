#include <stdio.h>
#include <string.h>
#define MAX 100
struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;   
};
struct Book book[MAX];
int count = 0;
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();
int main() {
    int choice;
    while (1) {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                issueBook();
                break;
            case 5:
                returnBook();
                break;
            case 6:
                printf("Thank You!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
}
void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &book[count].id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", book[count].title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", book[count].author);
    book[count].issued = 0;
    count++;
    printf("Book Added Successfully.\n");
}
void displayBooks() {
    int i;
    if (count == 0) {
        printf("No Books Available.\n");
        return;
    }
    printf("\n-------------------------------------------------------------\n");
    printf("ID\tTitle\t\tAuthor\t\tStatus\n");
    printf("-------------------------------------------------------------\n");
    for (i = 0; i < count; i++) {
        printf("%d\t%-15s%-15s%s\n",
               book[i].id,
               book[i].title,
               book[i].author,
               (book[i].issued == 0) ? "Available" : "Issued");
    }
}
void searchBook() {
    int id, i;
    printf("Enter Book ID: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (book[i].id == id) {
            printf("\nBook Found\n");
            printf("ID     : %d\n", book[i].id);
            printf("Title  : %s\n", book[i].title);
            printf("Author : %s\n", book[i].author);
            if (book[i].issued == 0)
                printf("Status : Available\n");
            else
                printf("Status : Issued\n");
            return;
        }
    }
    printf("Book Not Found.\n");
}
void issueBook() {
    int id, i;
    printf("Enter Book ID to Issue: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (book[i].id == id) {
            if (book[i].issued == 1) {
                printf("Book is Already Issued.\n");
            } else {
                book[i].issued = 1;
                printf("Book Issued Successfully.\n");
            }
            return;
        }
    }
    printf("Book Not Found.\n");
}
void returnBook() {
    int id, i;
    printf("Enter Book ID to Return: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (book[i].id == id) {
            if (book[i].issued == 0) {
                printf("Book is Already Available.\n");
            } else {
                book[i].issued = 0;
                printf("Book Returned Successfully.\n");
            }
            return;
        }
    }
    printf("Book Not Found.\n");
}
