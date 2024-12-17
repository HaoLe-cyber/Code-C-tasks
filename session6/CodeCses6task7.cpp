#include <stdio.h>

int main(){
    int n;
    printf ("Hay nhap vao gia tri n: ");
    scanf ("%d", &n);
    for (int i= 1; i <= (n < 0 ? -n : n); i++){
        if (n % i == 0)
        {
            printf ("Cac uoc cua %d la: %d\n",n,i);
        }
    }
    return 0;
}