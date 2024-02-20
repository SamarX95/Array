//Q.Write a C program to find the sum of all even numbers and the product of all odd numbers in an array of integers
#include <stdio.h>
#define yg 100
int main() {
    int arr[yg];
    int size, i;
    int sumEven = 0, productOdd = 1;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            sumEven += arr[i];
        } else {
            productOdd *= arr[i];
        }
    }
    printf("Sum of even numbers: %d\n", sumEven);
    printf("Product of odd numbers: %d\n", productOdd);

    return 0;
}
