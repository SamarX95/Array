//Q.Write a function to find the maximum of three integers
#include <stdio.h>
int max_of_three(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}
int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int max = max_of_three(num1, num2, num3);
    printf("Maximum of %d,%d,%d is %d\n", num1, num2, num3, max);
    return 0;
}
