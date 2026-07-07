#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i = 0, vowels = 0, consonants = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[i] != '\0') {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        i++;
    }
    printf("Number of vowels = %d\n", vowels);
    printf("Number of consonants = %d\n", consonants);
    return 0;
}