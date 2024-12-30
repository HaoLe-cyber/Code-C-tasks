#include <stdio.h>
#include <stdbool.h>

void inputArray(int** arr, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("Nhap phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}
void outputArray(int** arr, int row, int col){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void cornerElements(int** arr, int row, int col){
    printf("Cac phan tu o goc cua ma tran la: ");
    printf("%d ", arr[0][0]);
    printf("%d ", arr[0][col - 1]);
    printf("%d ", arr[row - 1][0]);
    printf("%d ", arr[row - 1][col - 1]);
    printf ("\n");
}
void borderElements(int** arr, int row, int col){
    printf("Cac phan tu tren duong bien cua ma tran la: ");
    for(int i = 0; i < col; i++){
        printf("%d ", arr[0][i]);
    }
    for(int i = 1; i < row; i++){
        printf("%d ", arr[i][col - 1]);
    }
    for(int i = col - 2; i >= 0; i--){
        printf("%d ", arr[row - 1][i]);
    }
    for(int i = row - 2; i > 0; i--){
        printf("%d ", arr[i][0]);
    }
    printf("\n");
}
void diagonalElements(int** arr, int row, int col){
    printf("Cac phan tu tren duong cheo chinh cua ma tran la: ");
    for(int i = 0; i < row; i++){
        printf("%d ", arr[i][i]);
    }
    printf("\n");
    printf("Cac phan tu tren duong cheo phu cua ma tran la: ");
    for(int i = 0; i < row; i++){
        printf("%d ", arr[i][row - i - 1]);
    }
    printf("\n");
}
bool isPrime(int n){
    if(n < 2){
        return false;
    }
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int row, col;
    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &row);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &col);
    int** arr = new int*[row];
    for(int i = 0; i < row; i++){
        arr[i] = new int[col];
    }
    int choice;
    do
    {
        printf ("1. Nhap cac gia tri cua mang\n");
        printf ("2. In gia tri cac phan tu theo ma tran\n");
        printf ("3. In ra cac phan tu o goc theo ma tran\n");
        printf ("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf ("5. In ra cac phan tu nam tren duong cheo trinh va cheo phu theo ma tran\n");
        printf ("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf ("7. Thoat\n");
        printf ("Lua chon cua ban: ");
        scanf ("%d", &choice);
        switch (choice)
        {
        case 1:
            inputArray(arr, row, col);
            break;
        case 2:
            outputArray(arr, row, col);
            break;
        case 3:
            cornerElements(arr, row, col);
            break;
        case 4:
            borderElements(arr, row, col);
            break;
        case 5:
            if (row != col){
                printf("Ma tran khong phai la ma tran vuong\n");
                break;
            }else{
                diagonalElements(arr, row, col);
                break;
            }
        case 6:
            printf("Cac phan tu la so nguyen to trong ma tran la: ");
            for(int i = 0; i < row; i++){
                for(int j = 0; j < col; j++){
                    if(isPrime(arr[i][j])){
                        printf("%d ", arr[i][j]);
                    }
                }
            }
            printf("\n");
            break;
        case 7:
            printf("Thoat chuong trinh\n");
            break;
        default:
            printf("Vui long chon dung chuc nang (1-7)\n");
            break;
        }
    }while (choice != 7);
    return 0;
}