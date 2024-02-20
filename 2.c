//Q.Write a C program to find the sum of all elements in a 1-D array
#include <stdio.h>

int findSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = findSum(arr, size);
    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}



