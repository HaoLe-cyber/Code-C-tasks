#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap do dai canh thu nhat: ");
    scanf("%f", &a);
    printf("Nhap do dai canh thu hai: ");
    scanf("%f", &b);
    printf("Nhap do dai canh thu ba: ");
    scanf("%f", &c);
    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a)) {
        printf("La 3 canh tam giac!");
    } else {
        printf("Khong phai 3 canh tam giac!");
    }
    return 0;
}
