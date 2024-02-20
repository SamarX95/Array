//Q.Write a program in C to find the transpose of a given matrix (2D array)
#include <stdio.h>
#define yg 100
int main() {
    int y,g;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &y,&g);
    int matrix[yg][yg], transpose[yg][yg];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i<y; i++) {
        for (int j = 0; j<g; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i=0;i<g;i++) {
        for (int j = 0; j < y; j++) {
            transpose[i][j] = matrix[j][i];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i <g; i++) {
        for (int j = 0; j <y; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
