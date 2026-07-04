#include <stdio.h>
int main() {
    int start, end, i, temp, remainder, result;
    printf("Enter starting number: ");
    scanf("%d", &start);
    printf("Enter ending number: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (i = start; i <= end; i++) {
        temp = i;
        result = 0;
        while (temp != 0) {
            remainder = temp % 10;
            result += remainder * remainder * remainder;
            temp = temp / 10;
        }
        if (result == i) {
            printf("%d ", i);
        }
    }
    return 0;
}