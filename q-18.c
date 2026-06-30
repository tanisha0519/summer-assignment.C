#include <stdio.h>
int main()
{
    int choice, score = 0;
    printf("===== QUIZ APPLICATION =====\n");
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. New Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 2)
        score++;
    printf("\n2. Which language is used to write C programs?\n");
    printf("1. Python\n2. Java\n3. C\n4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 3)
        score++;
    printf("\n3. Which symbol is used for comments in C?\n");
    printf("1. //\n2. ##\n3. <!-- -->\n4. %%\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 1)
        score++;
    printf("\n4. How many bits are there in a byte?\n");
    printf("1. 4\n2. 8\n3. 16\n4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 2)
        score++;
    printf("\n5. Which header file is used for printf()?\n");
    printf("1. string.h\n2. math.h\n3. stdio.h\n4. conio.h\n");
    printf("Enter your answer: ");
    scanf("%d", &choice);
    if (choice == 3)
        score++;
    printf("\n===== RESULT =====\n");
    printf("Your Score: %d/5\n", score);
    if (score == 5)
        printf("Excellent! You got all answers correct.\n");
    else if (score >= 3)
        printf("Good Job! You passed the quiz.\n");
    else
        printf("Better luck next time.\n");
    return 0;
}