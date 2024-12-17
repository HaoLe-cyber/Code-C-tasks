#include <stdio.h>

int main(){
    double cash, months, interestRate, profitCash, exchangedCash;
    printf ("Hay nhap vao so tien gui ban dau: ");
    scanf ("%lf", &cash);
    printf ("Hay nhap vao so thang gui: ");
    scanf ("%lf", &months);
    printf ("Hay nhap vao lai suat hang thang (%%): ");
    scanf ("%lf", &interestRate);
    profitCash = cash * (interestRate / 100) * months;
    exchangedCash = cash + profitCash;
    printf ("Tien lai: %.3lf\n", profitCash);
    printf ("Tien nhan duoc: %.3lf\n", exchangedCash);
    return 0;   
}