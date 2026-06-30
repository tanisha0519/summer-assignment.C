#include <stdio.h>
int main()
{
    int arr[100], n = 0;
    int choice, i, value, pos, found;
    while (1)
    {
        printf("\n===== MENU =====\n");
        printf("1. Insert Element\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Update Element\n");
        printf("5. Delete Element\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                if (n == 100)
                {
                    printf("Array is full.\n");
                }
                else
                {
                    printf("Enter element to insert: ");
                    scanf("%d", &value);
                    arr[n] = value;
                    n++;
                    printf("Element inserted successfully.\n");
                }
                break;
            case 2:
                if (n == 0)
                {
                    printf("Array is empty.\n");
                }
                else
                {
                    printf("Array Elements: ");
                    for (i = 0; i < n; i++)
                    {
                        printf("%d ", arr[i]);
                    }
                    printf("\n");
                }
                break;
            case 3:
                printf("Enter element to search: ");
                scanf("%d", &value);
                found = 0;
                for (i = 0; i < n; i++)
                {
                    if (arr[i] == value)
                    {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }
                if (!found)
                    printf("Element not found.\n");
                break;
            case 4:
                printf("Enter position to update (1-%d): ", n);
                scanf("%d", &pos);
                if (pos >= 1 && pos <= n)
                {
                    printf("Enter new value: ");
                    scanf("%d", &value);
                    arr[pos - 1] = value;
                    printf("Element updated successfully.\n");
                }
                else
                {
                    printf("Invalid position.\n");
                }
                break;
            case 5:
                printf("Enter position to delete (1-%d): ", n);
                scanf("%d", &pos);
                if (pos >= 1 && pos <= n)
                {
                    for (i = pos - 1; i < n - 1; i++)
                    {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    printf("Element deleted successfully.\n");
                }
                else
                {
                    printf("Invalid position.\n");
                }
                break;
            case 6:
                printf("Exiting Program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}