#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    float result = 0.0;

    originalNum = num;

    // Find the number of digits in the number
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of the nth power of each digit
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }

    // Check if the number is an Armstrong number
    return (int)result == num;
}

int main() {
    printf("Armstrong numbers between 100 and 500 are:\n");
    for (int i = 100; i <= 500; i++) {
        if (isArmstrong(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
