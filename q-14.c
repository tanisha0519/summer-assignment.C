#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("===== NUMBER GUESSING GAME =====\n");
    printf("Guess a number between 1 and 100.\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > number)
        {
            printf("Too High! Try Again.\n");
        }
        else if (guess < number)
        {
            printf("Too Low! Try Again.\n");
        }
        else
        {
            printf("\nCongratulations! You guessed the correct number.\n");
            printf("The number was %d.\n", number);
            printf("Total Attempts: %d\n", attempts);
        }
    } while (guess != number);
    return 0;
}