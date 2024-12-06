#include <stdio.h>

int main() {
    int num, factorial = 1;

    // Input a number from the user
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Factorial of negative numbers is not defined
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Using a for loop to calculate factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;  // Multiply factorial by the current value of i
        }

        // Display the result
        printf("The factorial of %d is: %d\n", num, factorial);
    }

    return 0;
}
