#include <stdio.h>

void inputArray(int arr[], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i * col + j]);
        }
    }
}

int main(){
    int row, col;
    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);
    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);
    int arr[row][col];
    inputArray((int*)arr, row, col);
    printf("Mang vua nhap la:\n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}