#include <stdio.h>
int main() {
    int n, i;
    int first = 0, second = 1, next;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input\n");
    } 
    else if (n == 1) {
        printf("The 1st Fibonacci term is 0\n");
    } 
    else if (n == 2) {
        printf("The 2nd Fibonacci term is 1\n");
    } 
    else {
        for (i = 3; i <= n; i++) {
            next = first + second;
            first = second;
            second = next;
        }
        printf("The %dth Fibonacci term is %d\n", n, second);
    }
    return 0;
}