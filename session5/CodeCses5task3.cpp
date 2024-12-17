#include <stdio.h>

int main(){
    int n,result;
    printf ("Hay nhap vao gia tri n: ");
    scanf ("%d", &n);
    for ( int i = 0; i <= n; i++)
    {
        result += i;
    }
    printf ("ket qua la: %d", result);
    return 0;
}