#include <stdio.h>

int factorial(int n){
    if (n <0)
    {
        printf ("Khong the tinh giai thua so am");
        return  1;
    }
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}

int main(){
    int n;
    printf ("Nhap vao gia tri nguyen duong n: ");
    scanf ("%d", &n);
    factorial(n);
    printf ("Giai thua cua %d la: %d", n, factorial(n));
    return 0;
}