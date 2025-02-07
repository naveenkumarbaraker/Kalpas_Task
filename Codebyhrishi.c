#include <stdio.h>

void findMaxThree(int arr[], int size) {
    if (size < 3) {
        printf("Array should have at least three elements.\n");
        return;
    }

    int first = -__INT_MAX__, second = -__INT_MAX__, third = -__INT_MAX__;

    for (int i = 0; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            third = second;
            second = arr[i];
        } else if (arr[i] > third) {
            third = arr[i];
        }
    }

    printf("The three largest numbers are: %d, %d, %d\n", first, second, third);
}

int main() {
    int arr[] = {10, 45, 34, 78, 90, 23, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    findMaxThree(arr, size);
    
    return 0;
}
