/*
    Trộn 2 mảng 1 chiều
*/

#include <stdio.h>
int a1[100], a2[100], a3[200];

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

void sapxeptang(int x[], int n) {
    int i, j;
    for(i = 0; i < n-1; i++) {
        for(j = i + 1; j < n; j++) {
            if (x[i] > x[j]) {
               int temp = x[i];
               x[i] = x[j];
               x[j] = temp;
            }
        }
    }
}

void tronMang(int a1[], int n_a1, int a2[], int n_a2, int a3[], int*  n_a3 ) {
    *n_a3 = n_a1 + n_a2;
    int i1 = 0;
    int i2 = 0;
    int i3 = 0;
    while(i3 < *n_a3) {
        if(i1 >= n_a1) {
            a3[i3] = a2[i2];
            i2++;
        }else if(i2 >= n_a2) {
            a3[i3] = a1[i1];
            i1++;
        }else if(a1[i1] < a2[i2]) {
            a3[i3] = a1[i1];
            i1++; 
        }else {
            a3[i3] = a2[i2];
            i2++;
        }
        i3++;
    }
}
int main() {
    int size1 = nhapsize();
    nhapmang(a1 , size1);
    xuatmang(a1, size1);
    sapxeptang(a1, size1);
    xuatmang(a1, size1);
    puts("");
    printf("----------------\n");
    int size2 = nhapsize();
    nhapmang(a2 , size2);
    xuatmang(a2, size2);
    sapxeptang(a2, size2);
    xuatmang(a2, size2);
    puts("");
    printf("----------------\n");
    int size3;
    tronMang(a1, size1, a2, size2, a3, &size3);
    xuatmang(a3, size3);
}