//Q.Write a program in C to find the sum of all elements in a 2D array
#include <stdio.h>

int main() {
    int y,g;
    printf("Enter the number of rows and columns of the 2D array: ");
    scanf("%d %d", &y, &g);

    int arr[y][g];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < y; i++) {
        for (int j = 0; j <g; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < g; j++) {
            sum += arr[i][j];
        }
    }

    printf("The sum of all elements in the 2D array is: %d\n", sum);

    return 0;
}
