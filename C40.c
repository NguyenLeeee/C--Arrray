/*
    Sắp xếp mảng tăng dần, giảm dần trong C
*/
#include <stdio.h>

//Thuật toán đổi vị trí
void swap(int *a, int *b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// Thuật toán sắp xếp mảng tăng dần1
void As_SelectionSort(int arr[], int n) {
    int i, j, vitrinhonhat;
    for(i = 0; i < n - 1; i++){
        vitrinhonhat = i;
        for(j = i + 1; j < n; j++){
            if(arr[j] < arr[vitrinhonhat])
                vitrinhonhat = j;
        }
        swap(&arr[vitrinhonhat], &arr[i]);
    }
}

//In ra thành phần của array
void print_array(int arr[], int n){
    int i; 
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

int main(){
    // Nhập số lượng phần tử trong mảng;
    int arr[100];
    int n;  
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
	
	// Nhập giá trị vào mỗi element trong mảng
    int i;
    for(i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    As_SelectionSort(arr, n);
    printf("Sap xep mang tang dan: ");
    print_array(arr, n);
}

