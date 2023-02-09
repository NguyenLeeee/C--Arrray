/*
    Tìm phần tử nhỏ thứ hai hoặc phần tử lớn thứ hai bên trong mảng.
*/
#include <stdio.h>
#include <limits.h>

int nhapsize() {
    int size;
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &size);
    } while (size < 0 || size > 100);
    return size;
}

void nhapmang(int x[], int size) {
	// Nhập giá trị vào mỗi element trong mảng
    int i;
    for(i = 0; i < size; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &x[i]);
    }
}

void xuatmang(int x[], int size) {
    printf("\nThanh phan cua mang la: ");
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
}

int SecondMin(int x[], int size) {
    int min = INT_MAX;
    int second_min = INT_MAX;

    //Tìm giá trị nhỏ nhất bên trong mảng.
    int i;
    for(i = 0; i < size; i++) {
        if(x[i] < min)
            min = x[i];
    }

    //Tìm giá trị nhỏ thứ hai bên trong mảng.

    for(i = 0; i < size; i++) {
        if(x[i] == min)
            continue;
        else if(x[i] < second_min)
            second_min = x[i];
    }
    return second_min;
}

int SecondMax(int x[], int size) {
    int max = INT_MIN;
    int second_max = INT_MIN;

    //Tìm giá trị lớn nhất bên trong mảng.
    int i;
    for(i = 0; i < size; i++) {
        if(x[i] > max)
            max = x[i];
    }

    //Tìm giá trị lớn thứ hai bên trong mảng
    for(i = 0; i < size; i++) {
        if(x[i] == max)
            continue;
        else if(x[i] > second_max)
            second_max = x[i];
    }
    return second_max;
}

int main() {
    int arr[100];
    int size;
    size = nhapsize();

    nhapmang(arr, size);
    xuatmang(arr, size);

    printf("\nGia tri nho thu hai trong mang la: %d\n", SecondMin(arr, size));
    printf("Gia tri lon thu hai trong mang la: %d", SecondMax(arr, size));
}