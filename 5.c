//Q.Write a program in C to count the frequency of element of an array
#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements in the array: \n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter the element to count its frequency: ");
    scanf("%d", &element);

    int frequency = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            frequency++;
        }
    }

    printf("Frequency of %d is: %d\n", element, frequency);

    return 0;
}
