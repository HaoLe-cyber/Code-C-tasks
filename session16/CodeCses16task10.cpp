#include <stdio.h>

void deleteElement(int *arr, int deleteIndex){
    for (int i = deleteIndex; i < 4; i++){
        *(arr + i) = *(arr +i+1);
    }
}

int main(){
    int arr[5] = {25, 15, 10, 5, 7}, deleteIndex = 2;
    deleteElement(arr, deleteIndex);
    printf ("Mang sau khi xoa phan tu o vi tri %d la: ", deleteIndex);
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}