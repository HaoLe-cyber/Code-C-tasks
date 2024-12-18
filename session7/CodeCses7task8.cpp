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
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf ("%d ", array[i][j]);
        }
        printf ("\n");
    }
    return 0;
}