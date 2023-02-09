/*
    Đảo ngược mảng 1 chiều trong C
*/
#include <stdio.h>
void nhapmang(int x[], int size);
void xuatmang(int x[], int size);
int nhapsize();
void xuatmangnguoc(int x[], int size);
void daonguocmang(int x[], int size);

int main() {
    int arr[100];
    int n = nhapsize();
    nhapmang(arr, n);
    xuatmang(arr, n);
    //xuatmangnguoc(arr, n);
    daonguocmang(arr, n);
    xuatmang(arr,n);
}

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

void daonguocmang(int x[], int size){
    int i; 
    for(i = 0; i < size/2; i++){
        int temp = x[i];
        x[i] = x[size - i - 1];
        x[size - i - 1] = temp; 
    }
}

void xuatmangnguoc(int x[], int size){
    printf("\nMang sau khi dao nguoc la: ");
    int i;
    for(i = size - 1; i >= 0; i--){
        printf("%d ", x[i]);
    }
}


void xuatmang(int x[], int size){
    printf("\nThanh phan cua mang la: ");
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
}