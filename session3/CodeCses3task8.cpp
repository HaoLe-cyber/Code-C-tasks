#include <stdio.h>

int main(){
    int N,thousands,hundreds,tens,unit,reversed;
    printf ("Hay nhap gia tri N: ");
    scanf ("%d", &N);
    thousands= N/1000;
    hundreds= (N/100)%10;
    tens= (N/10)%10;
    unit= N%10;
    reversed= unit*1000+tens*100+hundreds*10+thousands;
    printf ("Chu so da dao nguoc la: %d\n", reversed);
    return 0;
}