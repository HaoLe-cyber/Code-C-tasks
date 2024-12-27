#include <stdio.h>

bool isPrime(int n){
    if (n < 2)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main(){
    int num1, num2;
    printf ("Nhap vao gia tri n va m: ");
    scanf ("%d %d", &num1, &num2);
    if (isPrime(num1) && isPrime(num2))
    {
        printf ("%d va %d la so nguyen to", num1, num2);
    }else if (isPrime(num1))
    {
        printf ("%d la so nguyen to", num1);
    }else if (isPrime(num2))
    {
        printf ("%d la so nguyen to", num2);
    }else
    {
        printf ("Khong co so nguyen to nao");
    }
    return 0;
}