#include <stdio.h>

int main(){
    int sum, arr[3][3]= {{1,12,3},{47,6,23},{5,9,4}};
    for (int j = 0; j < 3; j++) {
        sum += arr[0][j];
    }
    for (int i = 1; i < 2; i++) {
        sum += arr[i][2];
    }
    for (int j=0; j<=2;j++) {
        sum += arr[2][j];
    }
    for (int i = 1; i < 2; i++) {
        sum += arr[i][0];
    }
    printf ("Tong cac phan tu o bien la: %d", sum);
    return 0;
}