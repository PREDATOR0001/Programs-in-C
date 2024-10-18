#include <stdio.h>

int findMaximum(int count) {
    int input, max;

    printf("Enter number 1: ");
    scanf("%d", &input);
    max = input;

    for (int i = 2; i <= count; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &input);
        
        if (input > max) {
            max = input;
        }
    }
    
    return max; 
}

int main() {
    int n;

    printf("How many numbers do you want to enter? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number of inputs.\n");
        return 1;
    }

    int maximum = findMaximum(n);
    printf("The maximum number entered is: %d\n", maximum);

    return 0;
}
