#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int choice;
    printf("Choose the order to display the array:\n");
    printf("1. Ascending order\n");
    printf("2. Descending order\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            bubbleSort(arr, n);
            printf("Array elements in ascending order: \n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            break;
        
        case 2:
            bubbleSort(arr, n);
            reverseArray(arr, n);
            printf("Array elements in descending order: \n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        
        default:
            printf("Invalid choice.\n");
            break;
    }

    return 0;
}
