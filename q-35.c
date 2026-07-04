#include <stdio.h>
int main() {
    int num, original, reverse = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0) {
        digit = num % 10;               // Get the last digit
        reverse = reverse * 10 + digit; // Reverse the number
        num = num / 10;                 // Remove the last digit
    }
    if (original == reverse)
        printf("%d is a Palindrome number.\n", original);
    else
        printf("%d is not a Palindrome number.\n", original);
    return 0;
}