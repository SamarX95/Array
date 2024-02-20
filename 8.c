//Q.Write a program in C to find the largest element in a 2D array with user define
#include <stdio.h>

#define yg 100

int main() {
    int y, g;
    printf("Enter the number of rows and columns of the 2D array: ");
    scanf("%d %d", &y, &g);

    int arr[yg][yg];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i <yg; i++) {
        for (int j = 0; j < g; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < g; j++) {
            if (arr[i][j] > max) {
                max= arr[i][j];
            }
        }
    }

    printf("The largest element in the 2D array is: %d\n", max);

    return 0;
}
