#include <stdio.h>
#include <string.h>

#define MAX 100

struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};

struct Product p[MAX];
int count = 0;

// Function Prototypes
void addProduct();
void displayProducts();
void searchProduct();
void updateQuantity();
void deleteProduct();

int main() {
    int choice;

    while (1) {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Delete Product\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct();
                break;
            case 2:
                displayProducts();
                break;
            case 3:
                searchProduct();
                break;
            case 4:
                updateQuantity();
                break;
            case 5:
                deleteProduct();
                break;
            case 6:
                printf("Thank You!\n");
                return 0;
            default:
                printf("Invalid Choice!\n");
        }
    }
}

// Add Product
void addProduct() {
    printf("Enter Product ID: ");
    scanf("%d", &p[count].id);

    printf("Enter Product Name: ");
    scanf(" %[^\n]", p[count].name);

    printf("Enter Quantity: ");
    scanf("%d", &p[count].quantity);

    printf("Enter Price: ");
    scanf("%f", &p[count].price);

    count++;
    printf("Product Added Successfully.\n");
}

// Display Products
void displayProducts() {
    int i;

    if (count == 0) {
        printf("No Products Available.\n");
        return;
    }

    printf("\n-------------------------------------------------------------\n");
    printf("ID\tName\t\tQuantity\tPrice\n");
    printf("-------------------------------------------------------------\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%-15s%d\t\t%.2f\n",
               p[i].id,
               p[i].name,
               p[i].quantity,
               p[i].price);
    }
}

// Search Product
void searchProduct() {
    int id, i;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (p[i].id == id) {
            printf("\nProduct Found\n");
            printf("ID       : %d\n", p[i].id);
            printf("Name     : %s\n", p[i].name);
            printf("Quantity : %d\n", p[i].quantity);
            printf("Price    : %.2f\n", p[i].price);
            return;
        }
    }

    printf("Product Not Found.\n");
}

// Update Quantity
void updateQuantity() {
    int id, i;

    printf("Enter Product ID: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (p[i].id == id) {
            printf("Enter New Quantity: ");
            scanf("%d", &p[i].quantity);

            printf("Quantity Updated Successfully.\n");
            return;
        }
    }

    printf("Product Not Found.\n");
}

// Delete Product
void deleteProduct() {
    int id, i, j;

    printf("Enter Product ID to Delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (p[i].id == id) {

            for (j = i; j < count - 1; j++) {
                p[j] = p[j + 1];
            }

            count--;
            printf("Product Deleted Successfully.\n");
            return;
        }
    }

    printf("Product Not Found.\n");
}