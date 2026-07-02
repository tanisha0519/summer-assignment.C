#include <stdio.h>
int main()
{
    int choice;
    int pin = 1234, enteredPin, newPin; 
    float balance = 5000.0, amount;
    printf("===== ATM SIMULATION =====\n");
    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);
    if (enteredPin != pin)
    {
        printf("Incorrect PIN! Access Denied.\n");
        return 0;
    }
    while (1)
    {
        printf("\n===== ATM MENU =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Change PIN\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Available Balance: Rs. %.2f\n", balance);
                break;
            case 2:
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
            case 3:
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
                    printf("Please collect your cash.\n");
                    printf("Remaining Balance: Rs. %.2f\n", balance);
                }
                break;
            case 4:
                printf("Enter New PIN: ");
                scanf("%d", &newPin);
                pin = newPin;
                printf("PIN changed successfully.\n");
                break;
            case 5:
                printf("Thank you for using the ATM.\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
