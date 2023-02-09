/*
    Thuật toán liệt kê các phần tử thỏa điều kiện trong mảng 1 chiều, Liệt kê các số nguyên tố
*/

#include <stdio.h>
#include <math.h>

int thoadieukien(int n){
    return n % 2 == 0 && n % 3 == 0;
}

int thoadieukienSNT(int n){
    int i;
    if (n < 1)
        return 0;
    for(i = 2; i <= sqrt(n); i++){
        if (n % i == 0)
        return 0;
    }
    return 1;
}

int main() {
    int arr[100];
    int n;
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
	
	int i;
    for(i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    // Các phần tử chẵn và chia hết cho 3
    printf("Cac phan tu chan va chia het cho 3: ");
    for(i = 0; i < n; i++) {
        if(thoadieukien(arr[i]))
            printf("%d ", arr[i]);
    }

    //Các phần tử là số nguyên tố
    printf("\nCac phan tu la so nguyen to: ");
    for(i = 0; i < n; i++) {
        if(thoadieukienSNT(arr[i]))
            printf("%d ", arr[i]);
    }
}