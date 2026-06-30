#include <stdio.h>
#include <string.h>
#define MAX 100
struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;
};
struct Book books[MAX];
int count = 0;
void addBook();
void displayBooks();
void searchBook();
void issueBook();
void returnBook();
void deleteBook();
int main() {
    int choice;
    while (1) {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Exit\n");
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
                deleteBook();
                break;
            case 7:
                printf("Thank You!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
}
void addBook() {
    printf("Enter Book ID: ");
    scanf("%d", &books[count].id);
    printf("Enter Book Title: ");
    scanf(" %[^\n]", books[count].title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);
    books[count].issued = 0;
    count++;
    printf("Book Added Successfully!\n");
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
               books[i].id,
               books[i].title,
               books[i].author,
               books[i].issued ? "Issued" : "Available");
    }
}
void searchBook() {
    int id, i;
    printf("Enter Book ID: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("\nBook Found\n");
            printf("ID      : %d\n", books[i].id);
            printf("Title   : %s\n", books[i].title);
            printf("Author  : %s\n", books[i].author);
            printf("Status  : %s\n",
                   books[i].issued ? "Issued" : "Available");
            return;
        }
    }
    printf("Book Not Found!\n");
}
void issueBook() {
    int id, i;
    printf("Enter Book ID to Issue: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].issued) {
                printf("Book Already Issued!\n");
            } else {
                books[i].issued = 1;
                printf("Book Issued Successfully!\n");
            }
            return;
        }
    }
    printf("Book Not Found!\n");
}
void returnBook() {
    int id, i;
    printf("Enter Book ID to Return: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (!books[i].issued) {
                printf("Book is Already Available!\n");
            } else {
                books[i].issued = 0;
                printf("Book Returned Successfully!\n");
            }
            return;
        }
    }
    printf("Book Not Found!\n");
}
void deleteBook() {
    int id, i, j;
    printf("Enter Book ID to Delete: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            for (j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            printf("Book Deleted Successfully!\n");
            return;
        }
    }
    printf("Book Not Found!\n");
}
