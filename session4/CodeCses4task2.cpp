#include <stdio.h>

int main(){
    int n;
    printf ("Hay nhap gia tri N: ");
    scanf ("%d", &n);
    if(n%2==0){
        printf ("N la so chan!");
    }
    else
    {
        printf ("N la so le!");
    }
    return 0;
    
}