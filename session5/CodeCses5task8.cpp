#include <stdio.h>

int main() {
    int a, b, x, y, bcnn;
    printf("Nhap so nguyen duong dau tien: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu 2: ");
    scanf("%d", &b);

    if (a <= 0 || b <= 0) {
        printf("Hay nhap vao so nguyen duong!\n");
        return 1;
    }
    x = a;
    y = b;
    while (x != y) {
        if (x > y) {
            x -= y;
        } else {
            y -= x;
        }
    }
    bcnn = (a * b) / x;
    printf("Boi chung nho nhat cua 2 so la: %d\n", bcnn);
    return 0;
}
