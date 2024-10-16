#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int lower, upper, x, guess, count = 0, flag = 0;
    int total_chances;

    printf("Enter Lower bound: ");
    scanf("%d", &lower);

    printf("Enter Upper bound: ");
    scanf("%d", &upper);


    srand(time(0));

    x = (rand() % (upper - lower + 1)) + lower;
    total_chances
        = (int)ceil(log(upper - lower + 1) / log(2));

    printf("\n\tYou've only %d chances to guess the "
           "integer!\n\n",
           total_chances);

    while (count < total_chances) {
        count++;

        printf("Guess a number: ");
        scanf("%d", &guess);

        if (x == guess) {
            printf(
                "Congratulations you did it in %d try!\n",
                count);
            flag = 1;
            break;
        }
        else if (x > guess) {
            printf("You guessed too small!\n");
        }
        else if (x < guess) {
            printf("You guessed too high!\n");
        }
    }

    if (!flag) {
        printf("\nThe number is %d\n", x);
        printf("\tBetter Luck Next time!\n");
    }

    return 0;
}
