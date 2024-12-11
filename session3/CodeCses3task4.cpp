#include <stdio.h>

int main(){
    float mathGrade, lecGrade, engGrade, sum, avg;
    printf ("hay nhap diem toan, van, anh cua ban: ");
    scanf ("%f %f %f", &mathGrade, &lecGrade, &engGrade);
    sum= mathGrade+lecGrade+engGrade;
    avg= (mathGrade+lecGrade+engGrade) /3;
    printf ("Tong diem la: %.2f\n", sum);
    printf ("Diem trung binh la: %.2f\n", avg);
    return 0;
}