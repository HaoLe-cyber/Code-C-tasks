#include <stdio.h>

int main(){
    int a,b,c,change;
    printf ("Hay nhap vao so nguyen #1: ");
    scanf ("%d", &a);
    printf ("Hay nhap vao so nguyen #2: ");
    scanf ("%d", &b);
    printf ("Hay nhap vao so nguyen #3: ");
    scanf ("%d", &c);
    if (a>b){
        change=a; a=b; b=change;
    }
    if (a>c){
        change=a; a=c; c=change;
    }
    if (b>c){
        change=b; b=c; c=change;
    }
    printf ("Thu tu cac so tang dan la: %d %d %d", a, b, c);
    return 0;
}