/*
    Tìm mảng con liên tiếp dài nhất trong mảng 1 chiều
*/

#include <stdio.h>
int a[100];
int n;

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

int timMax(int y[],int n) {
    int max = y[0];
    for(int i = 0; i < n; i++) {
        if(y[i] > max);
            max = y[i];
    }
    return max;
}

void inMangConKhongGiam(int x[], int n) {
    int b[100];
    for(int i = 0; i < n; i++) {
        b[i] = 1;
    }

    for(int i = n - 1;  i > 0 ; i++) {
        if(x[i] >= x[i - 1]) {
            b[i - 1] = b[i] + 1;
        } 
    }

    int soluongMax = timMax(b, n);
    for(int i = 0; i < n; i++) {
        if(b[i] == soluongMax) {
            printf("Mang con khong giam dai nhat la: ");
            for(int j = i; j < soluongMax + i; j++) {
                printf("%d ", x[j]);
            } 
        break;
        }
    }
}   
int main() {
    n = nhapsize();
    nhapmang(a, n);
    xuatmang(a, n);
    inMangConKhongGiam(a, n);
}