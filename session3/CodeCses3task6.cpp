#include <stdio.h>
#include <math.h>

int main(){
    float a,h,s;
    printf ("hay nhap vao do dai canh va chieu cao cua tam giac: ");
    scanf ("%f %f", &a, &h);
    s = (a*h)/2;
    printf ("dien tich tam giac la: %.2f\n", s);
    return 0;
}