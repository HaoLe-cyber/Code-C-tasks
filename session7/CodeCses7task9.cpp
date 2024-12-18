#include <stdio.h>

int main(){
    int row, col;
    printf ("Hay nhap vao so hang cua mang 2D: ");
    scanf ("%d", &row);
    printf ("Hay nhap vao so cot cua mang 2D: ");
    scanf ("%d", &col);
    if (row <= 0 || col <= 0)
    {
        printf ("Vui long nhap so Hang hoac Cot > 0");
        return 1;
    }
    int array[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf ("Nhap vao phan tu array[%d][%d]: ", i, j);
            scanf ("%d", &array[i][j]);
        }
    }
    printf ("Mang vua nhap la:\n");
    // Phần tử ở hàng đầu tiên
    for (int j = 0; j < col; j++) {
        printf("%d ", array[0][j]);
    }
    // Phần tử ở cột cuối cùng (trừ phần tử ở hàng đầu và hàng cuối)
    for (int i = 1; i < row - 1; i++) {
        printf("%d ", array[i][col - 1]);
    }
    // Phần tử ở hàng cuối cùng (nếu số hàng lớn hơn 1)
    if (row > 1) {
        for (int j = col - 1; j >= 0; j--) {
            printf("%d ", array[row - 1][j]);
        }
    }
    // Phần tử ở cột đầu tiên (trừ phần tử ở hàng đầu và hàng cuối)
    if (col > 1) {
        for (int i = row - 2; i > 0; i--) {
            printf("%d ", array[i][0]);
        }
    }

    printf("\n");
    return 0;
}