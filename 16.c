//Q.Write a program in C to copy the elements of one array into another array
#include <stdio.h>

#define yg 100

int main() {
    int originalArray[yg], copiedArray[yg];
    int size, i;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter elements of the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &originalArray[i]);
    }
    for (i = 0; i < size; i++) {
        copiedArray[i] = originalArray[i];
    }
    printf("Elements of copied array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", copiedArray[i]);
    }
    printf("\n");

    return 0;
}
