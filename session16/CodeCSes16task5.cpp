#include <stdio.h>

void changeIndex(int *arr, int *value, int *index){
   arr[*index] = *value;
}

int main(){
    int arr[5] = {25, 15, 10, 5, 7};
    int value = 11, index = 2;
    changeIndex(arr, &value, &index);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}