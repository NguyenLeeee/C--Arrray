/*
    Trộn 2 mảng 1 chiều
*/

#include <stdio.h>
int a1[100], a2[100], a3[100];

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

void sapxeptang(int x[], int n) {
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = i + 1; j < n; j++) {
            if (x[i] > x[j]){
               int temp = x[i];
               x[i] = x[j];
               x[j] = temp;
            }
        }
    }
}

void tronMang(int a1[], int n_a1, int a2[], int n_a2, int a3[], int n_a3 ) {
    int i1;
    int i2;
    int i3;
    while(i3 < n_a3) {
        if(i2 >= n_a2)
    }
}
int main() {
    int size = nhapsize();
    nhapmang(a1 , size);
    sapxeptang(a1, size);
    xuatmang(a1, size);
}