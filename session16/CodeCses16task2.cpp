#include <stdio.h>

void tradeValue (int *ptr, int a, int b){
    ptr = &a;
    a = b;
    b = *ptr;
}    
int main(){
    int a = 5, b = 10;
    int *ptr;
    tradeValue(ptr, a, b);
    printf("Gia tri cua a la: %d\n", a);
    printf("Gia tri cua b la: %d\n", b);
    return 0;
}