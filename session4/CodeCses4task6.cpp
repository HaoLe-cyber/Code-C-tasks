#include <stdio.h>

int main(){
    float oldNum, newNum, payment;
    float recentNum=0;
    printf ("Hay nhap so dien dau thang: ");
    scanf ("%f", &oldNum);
    printf ("Hay nhap so dien cuoi thang: ");
    scanf ("%f", &newNum);
    recentNum = newNum - oldNum;
    if (recentNum>=0 && recentNum<50){
        payment = recentNum * 10000;
        printf ("Tien dien thang nay la: %.2f VND", payment);
    }
    else if (recentNum>=50 && recentNum <100)
    {
        payment= (49 * 10000) + (recentNum - 49) * 15000;
        printf ("Tien dien thang nay la: %.2f VND", payment);
    }
    else if (recentNum >=100 && recentNum <150)
    {
        payment= (49*10000)+ (50*15000) + (recentNum-99) * 20000;
        printf ("Tien dien thang nay la: %.2f VND", payment);
    }
    else if (recentNum >=150 && recentNum <200)
    {
        payment= (49*10000)+ (50*15000) + (50*20000) + (recentNum-149) * 25000;
        printf ("Tien dien thang nay la: %.2f VND", payment);
    }
    else if (recentNum>=200)
    {
        payment= (49*10000)+ (50*15000) + (50*20000) + (50*25000) + (recentNum-199) * 30000;
        printf ("Tien dien thang nay la: %.2f VND", payment);
    }
    return 0;
}