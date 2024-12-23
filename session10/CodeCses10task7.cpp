#include <stdio.h>

int main() {
    int row, col;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col - 1; j++) {
            for (int k = j + 1; k < col; k++) {
                if (arr[i][j] > arr[i][k]) {
                    int temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep la:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
