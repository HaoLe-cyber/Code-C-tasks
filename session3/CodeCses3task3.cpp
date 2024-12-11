#include <stdio.h>
#include <math.h>

int main(){
    float pi=3.14;
    float r, v, s;
    printf ("Hay nhap vao ban kinh r: ");
    scanf ("%f", &r);
    v= 2*pi*r;
    s= pi*pow(r,2);
    printf ("chu vi cua hinh tron la: %.2f\n", v);
    printf ("dien tich cua hinh tron la: %.2f", s);
    return 0;
}