#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;
    printf("Nhap vao phan tu can kiem tra: ");
    scanf("%d", &element);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Phan tu %d ton tai trong mang tai vi tri %d!.\n", element, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Pha tu %d khong ton tai trong mang.\n", element);
    }
    return 0;
}
