//Q.Create a C program to find the maximum element in a 1-D array
#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1;i<size;i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size;
    printf("enter a size of an array");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }

    int max = findMax(arr,size);
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
