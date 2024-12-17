#include <stdio.h>

int main() {
    int num, temp;
    printf("Hay nhap vao 1 so nguyen: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Da nhap vao so am: -");
        num = -num;
    }
    if (num == 0) {
        printf("Các chữ số trong số đã nhập: 0\n");
    } else {
        printf("Các chữ số trong số đã nhập: ");
        temp = num;
        int digits[10], i = 0;
        while (temp > 0) {
            digits[i++] = temp % 10;
            temp /= 10;
        }
        for (int j = i - 1; j >= 0; j--) {
            printf("%d ", digits[j]);
        }
        printf("\n");
    }
    return 0;
}
