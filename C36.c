/*
    Nhập và xuất mảng một chiều và tính tổng các phần tử trong mảng.
*/
#include <stdio.h>

int main() {
    int arr[100];
    int n;
    do {
        printf("Nhap so luong phan tu cho Array: ");
        scanf("%d", &n);
    } while(n < 1 || n > 100);
    
    // Initialize Values for Array.
    int i;
    for(i = 0; i < n; i++) {
        printf("Array[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Print out each array's component
    printf("Components of array: \n");
    for(i = 0; i < n; i++) {
        printf("Array[%d] = %d\n", i, arr[i]);
    }
    
    //Print out the sum of array.
    int sum = 0;
    for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("Sum of each elements in array: %d", sum);
}
