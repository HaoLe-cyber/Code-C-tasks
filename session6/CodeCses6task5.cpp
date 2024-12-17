#include <stdio.h>

int main(){
    int months, years;
    printf ("Hay nhap vao so nam: ");
    scanf ("%d", &years);
    printf ("Hay nhap vao so thang: ");
    scanf ("%d", &months);
    if (months >12 || years <1)
    {
        printf ("Hay nhap dung gia tri cua thang, nam!!");
    }
    return 1;
    switch (months)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf ("Thang co 31 ngay!\n");
        break;
    case 4: case 6: case 9: case 11:
        printf ("Thang co 30 ngay!\n");
    case 2:
        if ((years % 4 ==0 && years % 100 != 0) || (years % 400 ==0))
        {
            printf ("Thang co 29 ngay!\n");
        }
        else 
        {
            printf ("Thang co 28 ngay!\n");
        }
        break;
    default:
        printf ("Hay nhap dung gia tri cua thang (1-12)!!\n");
        break;
    }
    if ((years % 4 ==0 && years % 100 != 0) || (years % 400 ==0))
        {
            printf ("Nam nay co 366 ngay!\n");
        }
        else {
            printf ("Nam nay co 365 ngay!\n");
        }
    return 0;
}