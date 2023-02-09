/*
    Tìm max, min trong mảng 1 chiều
*/

int max_of_array(int arr[], int n);
int min_of_array(int arr[], int n);

int main() {
    // Nhập số lượng phần tử trong mảng;
    int arr[100];
    int n;  
    do {
        printf("Nhap so luong phan tu cua mang: ");
        scanf("%d", &n);
    } while (n < 0 || n > 100);
	
	// Nhập giá trị vào mỗi element trong mảng
    int i;
    for(i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    //Gía trị lớn nhất trong mảng
    int Max_Arr = max_of_array(arr, n);
    printf("\nSo lon nhat trong mang la: %d\n", Max_Arr);


    int Min_Arr = min_of_array(arr, n);
    printf("So nho nhat trong mang la: %d\n", Min_Arr);
}

// Thuật toán tìm số lớn nhất trong mảng.
int max_of_array(int arr[], int n) {
    int i;
    int max = arr[0];
    for(i = 0; i < n; i++) {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}

// Thuật toán tìm số lớn nhất trong mảng
int min_of_array(int arr[], int n){
    int i;
    int min = arr[0];
    for(i = 0; i < n; i++) {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

