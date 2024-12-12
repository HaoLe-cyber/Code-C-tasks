#include <stdio.h>

int main(){
    int workHours;
    float cash, salary, extraSalary;
    printf (" Hay nhap so gio lam viec trong thang (gio): ");
    scanf ("%d", &workHours);
    printf (" Hay nhap muc luong theo gio (Dong): ");
    scanf ("%f", &cash);
    if (workHours > 160)
    {
        cash = workHours * cash;
        extraSalary = cash * 0.1;
        salary = cash + extraSalary;
        printf (" Tong tien luong la: %.0f\n", salary);
        printf ("Tien luong co ban la: %.0f\n", cash);
        printf ("Tien luong phu cap la: %.0f\n", extraSalary);
    }
    else {
        salary = workHours *cash;
         printf (" Tong tien luong la: %.0f\n", salary);
    }
return 0;
}