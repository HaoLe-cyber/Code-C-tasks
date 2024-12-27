#include <stdio.h>

void array(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap vao phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Mang sau khi nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main(){
    int n;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    array(arr, n);
    return 0;
}