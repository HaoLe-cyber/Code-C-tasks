#include <stdio.h>

int sumNumber(int *a, int *b){
    return *a + *b;
}

int main(){
    int a = 5, b = 10;
    printf("Tong cua a va b la: %d", sumNumber(&a, &b));
    return 0;
}