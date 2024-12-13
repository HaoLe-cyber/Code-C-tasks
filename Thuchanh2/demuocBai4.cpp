#include <stdio.h>

int main(){
    int n;
    printf ("Hay nhap vao gia tri nguyen duong N: ");
    scanf ("%d", &n);
    if (n<=0){
        printf ("Hay nhap gia tri N la nguyen duong!");
    }
    for (int i=1; i<=n;i++){
        if (n%i==0){
            printf ("%d la uoc cua %d\n", i, n);
        }
    }
    return 0;
}