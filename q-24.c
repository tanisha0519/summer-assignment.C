#include <stdio.h>
int main()
{
    int choice;
    float balance = 0.0, amount;
    while (1)
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0)
                {
                    balance += amount;
                    printf("Rs. %.2f deposited successfully.\n", amount);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0)
                {
                    printf("Invalid amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance.\n");
                }
                else
                {
                    balance -= amount;
                    printf("Rs. %.2f withdrawn successfully.\n", amount);
                }
                break;
            case 3:
                printf("Current Balance: Rs. %.2f\n", balance);
                break;
            case 4:
                printf("Thank you for using the Bank Account System.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}