#include <stdio.h>
int main() {
    int num, temp, digit, i;
    int sum = 0, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }
        sum += fact;
        temp = temp / 10;
    }
    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);
    return 0;
}