/*
    Tìm kiếm một thành phần bên trong mảng!!
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

// Tìm kiếm và trả lại giá trị. 0 là không có, 1 là có.
int timkiem(int x[], int size, int finding){
    int i;
    for(i = 0; i < size; i++) {
        if(x[i] == finding)
            return 1;
        }
    return 0;
}

//Nhập giá trị cần tìm kiếm và trả về kết quả!
void thuchientimkiem(int x[], int size){
    printf("\nNhap vao gia tri can tim trong mang: ");
    int finding;
    scanf("%d", &finding);

    int kq = timkiem(x, size, finding);
    if(kq == 1)
        printf("\nTim thay!!");
    else
        printf("\nKhong Tim Thay!!");
}

int main() {
    int arr[100];
    int size;
    size = nhapsize();

    nhapmang(arr, size);
    xuatmang(arr, size);
    thuchientimkiem(arr, size);
}