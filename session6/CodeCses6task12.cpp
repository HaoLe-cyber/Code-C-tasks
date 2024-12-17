#include <stdio.h>

int main(){
    int n;
    printf ("Nhap vao so nguyen duong n: ");
    scanf ("%d", &n);
    if (n<0)
    {
        printf ("Vui long nhap so nguyen duong n!!");
        return 0;
    }
    long long a=0, b=1, fibo;
    for (int i = 1; i <= n; i++)
    {
        printf ("%lld ", a);
        fibo = a + b;
        a = b;
        b = fibo;
    }
    
    return 0;
}