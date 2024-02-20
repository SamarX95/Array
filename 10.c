#include <stdio.h>
#define yg 100
int main() {
    int R1, C1;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &R1, &C1);
    int matrix[yg][yg];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C1; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isSymmetric = 1;
    if (R1 != C1) {
        isSymmetric = 0;
    } else {
        for (int i = 0; i < R1; i++) {
            for (int j = 0; j < C1; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    isSymmetric = 0;
                    break;
                }
            }
            if (!isSymmetric) {
                break;
            }
        }
    }
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}
