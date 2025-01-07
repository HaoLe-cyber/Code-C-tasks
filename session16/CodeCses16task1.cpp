#include <stdio.h>

int main(){
    int n = 27;
    int *ptr;
    ptr = &n;
    printf ("(Cach 1) Gia tri cua N la: %d\n", n);
    printf ("(Cach 2) Gia tri cua N la: %d\n", *ptr);
    printf ("(Cach 1) Dia chi cua N la: %d\n", &n);
    printf ("(Cach 2) Dia chi cua N la: %d\n", ptr);
    return 0;
}