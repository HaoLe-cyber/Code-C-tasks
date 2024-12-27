#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main(){
    int a, b;
    printf ("Nhap vao 2 so a va b: ");
    scanf ("%d %d", &a, &b);
    sum(a, b);
    printf ("Tong cua 2 so la: %d", sum(a, b));
    return 0;
}