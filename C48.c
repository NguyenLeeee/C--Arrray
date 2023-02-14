/*
    Bài Tập Tách Mảng Thành 2 Mảng
*/
#include <stdio.h>

int a[200], a1[100], a2[100];
int n, n1, n2;
int nhapsize() {
    int size;
    printf("Nhap kich thuoc cho mang: ");
    scanf("%d", &size);
    if(size < 0 || size > 100) {
        printf("Gia tri khong hop le. Vui long nhap lai.");
        return nhapsize();
    }
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
    printf("Thanh phan cua mang la: \n");
    int i;
    for(i = 0; i < size; i++) {
        printf("%d ", x[i]);
    }
    puts("");
}

void tachMang(int a[], int n, int a1[], int* n1, int a2[], int* n2) {
    int i;
    int i1 = 0;
    int i2 = 0;
    *n1 = 0;
    *n2= 0;
    for(i = 0; i < n; i++) {
        if(a[i] % 2 == 0) {
            a1[i1] = a[i];
            i1++;
            *n1 = *n1 + 1;
        }
        else {
            a2[i2] = a[i];
            i2++;
            *n2 = *n2 + 1;
        }
    }
}

int main() {
    n = nhapsize();
    nhapmang(a, n);
    xuatmang(a, n);
    puts("");
    tachMang(a, n, a1, &n1, a2, &n2);
    xuatmang(a1, n1);
    xuatmang(a2, n2);
}