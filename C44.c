/*
    Xóa phần tử theo điều kiện trong mảng 1 chiều.
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

//Xóa mảng tại vị trí được chỉ định.
void XoaMangTaiViTri(int x[], int *size, int position) {
    int i;
    for(i = position; i < *size - 1; i++){
        x[i] = x[i + 1]; 
    }
    (*size)--;
}

//Hàm nhập giá trị cần xóa
void XoaMangTheoGiaTri(int x[], int *size) {
    int value;
    printf("\nNhap gia tri can xoa: ");
    scanf("%d", &value);

    int i;
    for(i = 0; i < *size; i++) {
        if(x[i] == value)
            XoaMangTaiViTri(x, size, i);
    }
}

int main() {
    int arr[100];
    int size;
    size = nhapsize();
    nhapmang(arr, size);
    xuatmang(arr, size);

    XoaMangTheoGiaTri(arr, &size);
    xuatmang(arr, size);

    return 0;
}

