#include <stdio.h>
#include <math.h>

int main(){
    int n;
    printf ("Hay nhap vao gia tri N: ");
    scanf ("%d", &n);
    if (n<=1){
        printf ("N khong phai so nguyen to!");
    }
    int isPrime = 1;
    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            isPrime = 0;
            break;
        }
    }
    if (isPrime ==1){
        printf ("N la so nguyen to!");
    }
    else {
        printf ("N khong phai so nguyen to!");  
    }
return 0;
}