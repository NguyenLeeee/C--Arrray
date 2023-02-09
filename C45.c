/*
    Chèn một số nguyên m bất kì vào mảng.
*/
#include <stdio.h>

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

//Hàm chèn một nguyên m vào cuối mảng.
void Include_At_The_End(int x[], int *n) {
    if(*n == 100) {
        printf("Khong the nhap them nua");
    }
    else {
        printf("Nhap gia tri can them vao: ");
        int value;
        scanf("%d", &value);
        x[*n] = value;
        (*n)++;
    }
}
// Thêm giá trị vào vị trí đầu tiên của mảng
void Include_At_Head(int x[], int *n){
    if(*n == 100) {
        printf("Khong the nhap them nua");
    }
    else {
        printf("Nhap gia tri can them vao: ");
        int value;
        scanf("%d", &value);
        int i;
        (*n)++;
        for(i = (*n) - 1; i > 0; i--){
            x[i] = x[i - 1];
        }
        x[0] = value;
    }
}

void Include_Random_K(int x[], int *n){
    if(*n == 100) {
        printf("Khong the nhap them nua");
    }
    else {
        printf("Nhap vi tri: ");
        int k;
        scanf("%d", &k);
        printf("Nhap gia tri can them vao: ");
        int value;
        scanf("%d", &value);
        int i;
        (*n)++;
        for(i = *(n) - 1; i > k; i--){
            x[i] = x[i - 1];
        }
        x[k] = value;
    }
}
int main(){
    int arr[100];
    int size;
    size = nhapsize();
    nhapmang(arr, size);
    xuatmang(arr, size);
    puts("");
    printf("Them mot gia tri vao vi tri cuoi cung cua array\n");
    Include_At_The_End(arr, &size);
    xuatmang(arr, size);
    puts("");
    printf("Them mot gia tri vao vi tri dau tien cua array\n");
    Include_At_Head(arr, &size);
    xuatmang(arr, size);
    puts("");
    printf("Them mot gia tri vao vi tri bat ki cua array\n");
    Include_Random_K(arr, &size);
    xuatmang(arr, size);
}
