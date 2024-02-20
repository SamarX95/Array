//Q.function in C to calculate the average of elements in a 1-D array
#include <stdio.h>

float calculateAverage(int arr[], int size) {
    float sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    float average = sum / size;

    return average;
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
    double avg = calculateAverage(arr, size);
    printf("The average of elements in the array is: %f\n", avg);

    return 0;
}
