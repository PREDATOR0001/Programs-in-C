#include <stdio.h>
#include <stdlib.h>

// Function to calculate the factorial of a number
long long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char *argv[]) {
    // Check if a number is provided via command line arguments
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    // Convert the input argument to an integer
    int num = atoi(argv[1]);

    // Check if the input is a valid non-negative integer
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Calculate and print the factorial
    long long int result = factorial(num);
    printf("The factorial of %d is %lld\n", num, result);

    return 0;
}
