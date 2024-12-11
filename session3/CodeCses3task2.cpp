#include <stdio.h>

int main(){
    float temp;
    printf ("Hay nhap gia tri nhiet do (do C): ");
    scanf ("%f", &temp);
    temp = (1.8*temp) + 32.0;
    printf ("Gia tri nhiet do khi chuyen sang do F la: %.2f", temp);
    return 0;
}