#include <stdio.h>

int main(){
    int num, sum=0;
    printf ("Nhap vao so hang va cot cua ma tran: ");
    scanf ("%d", &num);
    int matrix[num][num];
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf ("Nhap vao phan tu tai matrix[%d][%d]: ", i,j);
            scanf ("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            printf ("%d  ", matrix[i][j]);
        }
        printf ("\n");
    }
    for (int i = 0; i < num; i++)
    {
        printf ("%d ", matrix[i][num - 1 -i]);
        sum += matrix[i][num - 1 -i];
    }
    printf ("\nTong cac phan tu tren duong cheo phu la: %d", sum);
    return 0;
}