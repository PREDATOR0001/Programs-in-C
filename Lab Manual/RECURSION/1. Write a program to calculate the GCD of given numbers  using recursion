#include <stdio.h>

// Function to calculate GCD using recursion
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int num1, num2;

    // Input the two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate the GCD
    int result = gcd(num1, num2);

    // Output the result
    printf("The GCD of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
