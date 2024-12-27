#include <stdio.h>

int perfectNumber(int n){
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    return 0;
}

int main(){
    int n;
    printf ("Nhap vao gia tri n: ");
    scanf ("%d", &n);
    if (perfectNumber(n))
    {
        printf ("%d la so hoan hao", n);
    }else{
        printf ("%d khong phai la so hoan hao", n);
    }
    return 0;
}   