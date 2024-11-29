#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    if (n < 2) {
        printf("Array doesn't have enough elements to find the second largest number.\n");
        return 0;
    }
    int largest = arr[0];
    int secondLargest = -1;

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest; 
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == -1) {
        printf("There is no second largest number.\n");
    } else {
        printf("The second largest number is: %d\n", secondLargest);
    }

    return 0;
}
