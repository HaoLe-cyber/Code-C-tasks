#include <stdio.h>

int findIndex (int *arr, int *value){
    int foundIndex = 0;
    for (int i = 0; i < 5; i++){
        if (*(arr + i) == *value){
            foundIndex = i;
            break;
        }
    }
    return foundIndex;
}

int main(){
    int arr[5] = {25, 15, 10, 5, 7};
    int value = 10;
    printf("Vi tri cua gia tri %d trong mang la: %d", value, findIndex(arr, &value));
    return 0;
}