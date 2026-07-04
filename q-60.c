#include <stdio.h>
int main() {
    int n, i;
    int first = 0, second = 1, next;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n == 1)
        printf("The %dst Fibonacci term is %d\n", n, first);
    else if (n == 2)
        printf("The %dnd Fibonacci term is %d\n", n, second);
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