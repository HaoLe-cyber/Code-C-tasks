#include <stdio.h>

int main() {
    int arr[] = {55, 62, 14, 82, 52 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp;
    for (int i = 0; i < size; i++){
        int indexLocate = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > indexLocate){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = indexLocate;
    }
    printf("Mang sau khi sap xep la: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}