#include <stdio.h>
#include <math.h>

int main(){
    double a,b,c,delta,x1,x2;
    printf ("Hay nhap vao he so a: ");
    scanf ("%lf",&a);
    printf ("Hay nhap vao he so b: ");
    scanf ("%lf",&b);
    printf ("Hay nhap vao he so c: ");
    scanf ("%lf",&c);
    delta = b*b-4*a*c;
    if (delta<0)
    {
        printf ("Phuong trinh vo nghiem!");
    }
    else {
        if (delta>0)
        {
            x1= (-b - sqrt(delta)) / (2*a);
            x2= (-b + sqrt(delta)) / (2*a);
            printf("Phuong trinh co 2 nghiem phan biet x1,x2:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        }
        else if (delta==0)
        {
            x1= -b / (2*a);
            printf ("Phuong trinh co nghiem kep x1 = x2: %.2lf", x1);
        }
    }
    return 0;
}