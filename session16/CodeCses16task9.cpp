#include <stdio.h>

void addElement(int *arr, int value, int addIndex) {
    for (int i = 4; i > addIndex; i--) {
        arr[i] = arr[i - 1];
    }
    arr[addIndex] = value;
}

int main() {
    int arr[5] = {25, 15, 10, 5, 7};
    int value = 12, addIndex = 2;
    addElement(arr, value, addIndex);
    printf("Mang sau khi them %d vao vi tri %d la: ", value, addIndex);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
