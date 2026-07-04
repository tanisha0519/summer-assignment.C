#include <stdio.h>
int main() {
    int num, original, remainder, i;
    int fact, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num > 0) {
        remainder = num % 10;
        fact = 1;
        for (i = 1; i <= remainder; i++) {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if (sum == original)
        printf("%d is a Strong Number.\n", original);
    else
        printf("%d is not a Strong Number.\n", original);
    return 0;
}