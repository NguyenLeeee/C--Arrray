#include <stdio.h>

void inputArray(int arr[], int size) {
  int i;
  printf("Enter %d elements:\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
}

void outputArray(int arr[], int size) {
  int i;
  printf("The elements of the array are:\n");
  for (i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int enterArraySize() {
  int size;
  printf("Enter size of array: ");
  scanf("%d", &size);
  return size;
}

int main() {
  int arr[100], size;
  size = enterArraySize();
  inputArray(arr, size);
  outputArray(arr, size);
  return 0;
}
