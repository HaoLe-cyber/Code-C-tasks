#include <stdio.h>

int main(){
    int n;
    printf ("Hay nhap gia tri N: ");
    scanf ("%d", &n);
    if(n>0){
        printf ("N la so nguyen duong!");
    }
    else if (n<0)
    {
        printf ("N la so nguyen am!");
    }
    else {printf ("N khong duong, khong am!");}
    return 0;
    
}