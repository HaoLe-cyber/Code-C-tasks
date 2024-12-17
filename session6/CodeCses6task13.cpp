#include <stdio.h>

int main(){
    int days, months;
    printf ("Hay nhap vao ngay sinh cua ban: ");
    scanf  ("%d", &days);
    printf ("Hay nhap vao thang sinh cua ban: ");
    scanf  ("%d", &months);
    if (days<1 || days>31 || months >12 || months <1)
    {
        printf ("Vui long nhap dung gia tri cua ngay va thang!!");
        return 1;
    }
    else if (months == 2 && days > 28)
    {
        printf ("Vui long nhap dung gia tri cua ngay va thang!!");
        return 1;
    }
    
    if ((months == 3 && days >= 21) || (months == 4 && days <= 20))
        {
            printf ("Cung hoang dao cua ban la: Bach Duong");
        }
    else if ((months == 4 && days >= 21) || (months == 5 && days <=20))
    {
        printf ("Cung hoang dao cua ban la: Kim Nguu");
    }
    else if ((months == 5 && days >= 21) || (months == 6 && days <=21))
    {
        printf ("Cung hoang dao cua ban la: Song Tu");
    }
    else if ((months == 6 && days >= 22) || (months == 7 && days <=22))
    {
        printf ("Cung hoang dao cua ban la: Cu Giai");
    }
    else if ((months == 7 && days >= 23) || (months == 8 && days <=22))
    {
        printf ("Cung hoang dao cua ban la: Su Tu");
    }
    else if ((months == 8 && days >= 23) || (months == 9 && days <=22))
    {
        printf ("Cung hoang dao cua ban la: Xu Nu");
    }
    else if ((months == 9 && days >= 23) || (months == 10 && days <=23))
    {
        printf ("Cung hoang dao cua ban la: Thien Binh");
    }
    else if ((months == 10 && days >= 24) || (months == 11 && days <=22))
    {
        printf ("Cung hoang dao cua ban la: Bo Cap");
    }
    else if ((months == 11 && days >= 23) || (months == 12 && days <=21))
    {
        printf ("Cung hoang dao cua ban la: Nhan Ma");
    }
    else if ((months == 12 && days >= 22) || (months == 1 && days <=19))
    {
        printf ("Cung hoang dao cua ban la: Ma Ket");
    }
    else if ((months == 1 && days >= 20) || (months == 2 && days <=18))
    {
        printf ("Cung hoang dao cua ban la: Bao Binh");
    }
    else if ((months == 2 && days >= 19) || (months == 3 && days <=20))
    {
        printf ("Cung hoang dao cua ban la: Song Ngu");
    }
    return 0;
}