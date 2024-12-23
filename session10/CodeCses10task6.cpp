#include <stdio.h>

int main() {
    int arr[] = {45, 12, 78, 34, 23, 56, 89, 12, 34, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element;
    printf("Nhap vao phan tu can tim: ");
    scanf("%d", &element);
    int positions[n];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == element) {
            positions[count] = i;
            count++;
        }
    }
    if (count > 0) {
        printf("Phan tu %d duoc tim thay tai cac vi tri: ", element);
        for (int i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    } else {
        printf("Phan tu %d khong ton tai trong mang.\n", element);
    }
    return 0;
}