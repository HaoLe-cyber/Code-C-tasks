#include <stdio.h>

void sortArray(int *arr){
    int temp;
    for (int i = 0; i < 5; i++){
        for (int j = i + 1; j < 5; j++){
            if (*(arr + i) > *(arr + j)){
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main(){
    int arr[5] = {25, 15, 10, 5, 7};
    sortArray(arr);
    printf ("Mang sau khi sap xep: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", *(arr + i));
    }
    return 0;
}