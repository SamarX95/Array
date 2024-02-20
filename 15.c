//Q.function to calculate the factorial of a given integer
#include <stdio.h>
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}
int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Error:Please enter a non-negative integer.\n");
        return 1; 
    }
    int result = factorial(num);
    printf("Factorial of %d,%dis \n", num, result);
    return 0;
}
