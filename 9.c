//Q.Write a program in C to multiply two matrices (2D arrays)
#include <stdio.h>
#define YG 100
int main() {
    int R1, C1, R2, C2;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &R1, &C1);
    int M1[YG][YG];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &M1[i][j]);
        }
    }
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &R2, &C2);

    int M2[YG][YG];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < R2; i++) {
        for (int j = 0; j < C2; j++) {
            scanf("%d", &M2[i][j]);
        }
    }
    if (C1 != R2) {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }
    int result[YG][YG];
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < C1; k++) {
                result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
