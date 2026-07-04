#include <stdio.h>
#include <math.h>
int main() {
    int start, end, num, original, remainder, digits, sum;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    printf("Armstrong numbers between %d and %d are:\n", start, end);
    for (num = start; num <= end; num++) {
        original = num;
        digits = 0;
        sum = 0;
        while (original != 0) {
            digits++;
            original /= 10;
        }
        original = num;
        while (original != 0) {
            remainder = original % 10;
            sum += pow(remainder, digits);
            original /= 10;
        }
        if (sum == num)
            printf("%d ", num);
    }
    return 0;
}