#include <stdio.h>

int compare(int arr[], int size){
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
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
    printf ("Nhap vao gia tri n: ");
    scanf ("%d", &n);
    int arr[n];
    array(arr, n);
    printf("\nPhan tu lon nhat trong mang la: %d", compare(arr, n));
    return 0;
}