int main()
{
    int choice;
    float num1, num2, result;
    while (1)
    {
        printf("\n===== MENU DRIVEN CALCULATOR =====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 6)
        {
            printf("Exiting Calculator...\n");
            break;
        }
                break;
            case 5:
                printf("Modulus = %d\n", (int)num1 % (int)num2);
                break;
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }
    return 0;
}