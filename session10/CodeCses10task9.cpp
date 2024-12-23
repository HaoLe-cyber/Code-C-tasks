#include <stdio.h>

int main() {
    int row, col;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);
    if (row!=col)
    {
        printf("Mang khong phai la ma tran vuong khong the sap xep duong cheo chinh\n");
        return 0;
    }
    int arr[row][col];
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int compare[row];
    for (int i = 0; i < row; i++)
    {
        compare[i] = arr[i][i];
    }
    for (int i = 0; i < row-1; i++)
    {
        for (int j = i+1; j < row; j++)
        {
            if (compare[i]>compare[j])
            {
                int temp = compare[i];
                compare[i] = compare[j];
                compare[j] = temp;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        arr[i][i] = compare[i];
    }
    printf("Mang sau khi sap xep duong cheo chinh la:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}