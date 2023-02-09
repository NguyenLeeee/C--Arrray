/*
    Nhập vào mảng một chiều gồm (0<n<=100) phần tử:
    1. Tính trung bình cộng các phần từ trong mảng.
    2. Tính trung bình cộng các số dương trong mảng.
*/
#include <stdio.h>

float all_average(int arr[], int n);
float positive_average(int arr[], int n);

int main() {
    int arr[100];
    int n;
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
	
	int i;
    for(i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    float trung_binh_cong = all_average(arr, n);
    printf("Trung binh cong cua mang la: %.2f\n", trung_binh_cong);

    float trung_binh_duong = positive_average(arr, n);
    if(trung_binh_duong > 0)
        printf("Trung binh cong cac so duong cua mang la: %.2f\n", trung_binh_duong);
    else
        printf("Mang khong co phan tu duong\n");
}

float all_average(int arr[], int n) {
    int sum = 0;
    int i;
	for(i = 0; i < n; i++) {
        sum += arr[i];
    }
    return  (float)sum/n;
}

float positive_average(int arr[], int n) {
    int sum = 0;
    int count = 0;
    int i;
	for(i = 0; i < n; i++) {
        if(arr[i] > 0){
            sum += arr[i];
            count++; 
        }
    }
    return (float)sum/count;
}
