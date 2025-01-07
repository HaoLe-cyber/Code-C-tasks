#include <stdio.h>

void outputArray(int *arr){
    for (int i = 0; i < 5; i++){
        printf("%d ", *(arr + i));
    }
}

int main(){
    int arr[5] = {25, 15, 10, 5, 7};
    outputArray(arr);
    return 0;
}