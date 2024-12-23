#include <stdio.h>

int main() {
    int arr[] = {45, 12, 78, 34, 23, 56, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang da sap xep: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int element;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &element);
    int left = 0, right = n - 1;
    int found = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == element) {
            found = mid;
            break;
        } else if (arr[mid] < element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found != -1) {
        printf("Phần tử %d được tìm thấy tại vị trí %d.\n", element, found);
    } else {
        printf("Phần tử %d không tồn tại trong mảng.\n", element);
    }
    return 0;
}
