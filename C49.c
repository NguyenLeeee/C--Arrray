/*
    Kiểm tra mảng con liên tiếp giữa 2 mảng 1 chiều
*/

#include <stdio.h>
int a[100], b[100];
int a1, b1;

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

int checkMangCon(int x[], int x1, int y[], int y1) {
    int result = 0;
    if(y1 <= x1) {
        for(int i = 0; i < x1; i++) {
            if(x[i] == y[0]) {
                int j;
                for(j = 0; j < y1; j++) {
                    if (x[j+i] != y[j])
                        break;
                    else
                        result = 1;
                }
            }
        }
    }
    return result;
}
int main() {
    printf("Nhap mang a: \n\n");
    a1 = nhapsize();
    nhapmang(a, a1);
    xuatmang(a, a1);
    puts("");
    printf("Nhap mang b: \n\n");
    b1 = nhapsize();
    nhapmang(b, b1);
    xuatmang(b, b1);
    puts("");
    int res = checkMangCon(a, a1, b, b1);
    if(res) {
        printf("b la mang con cua a");
    }
    else {
        printf("b khong phai la mang con cua a");
    }
}