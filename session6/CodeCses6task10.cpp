#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf ("Hay nhap vao so nguyen n: ");
    scanf  ("%d", &n);
    if (n < 1)
    {
        printf ("Khong phai so nguyen to!");
    }
    else{
        int isPrime = 1;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n%i == 0)
            {
                isPrime = 0;
            }
            break;            
        }
        if (isPrime)
        {
            printf ("So nguyen n la so nguyen to!!");
        }
        else {
            printf ("Khong phai so nguyen to!");
        }
    }
    

    return 0;
}