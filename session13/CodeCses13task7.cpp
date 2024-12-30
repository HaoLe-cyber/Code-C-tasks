#include <stdio.h>
#define MAX 100

void inputArray(int arr[MAX][MAX], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void outputArray(int arr[MAX][MAX], int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int row, col;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &row);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &col);
    int arr[MAX][MAX];
    inputArray(arr, row, col);
    outputArray(arr, row, col);
    return 0;
}