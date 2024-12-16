#include <stdio.h>

int main(){
    int N;
    printf ("Hay nhap vao gia tri n: ");
    scanf ("%d", &N);
    if (N%3==0 && N%5==0)
    {
         printf ("N chia het cho 3 va 5");
    }
    else if (N%3==0){
        printf ("N chia het cho 3");
    }
    else if (N%5==0)
    {
        printf ("N chia het cho 5");
    }
    else {printf ("N khong the chia het");}
    return 0;
    
    
}