#include <stdio.h>

int main(){
    int N,thousands,hundreds,tens,unit,sum;
    printf ("Hay nhap gia tri N: ");
    scanf ("%d", &N);
    thousands= N/1000;
    hundreds= (N/100)%10;
    tens= (N/10)%10;
    unit= N%10;
    sum=thousands+hundreds+tens+unit;
    printf ("tong cac chu so cua N la: %d\n", sum);
    return 0;
}