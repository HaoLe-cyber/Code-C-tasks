#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap so nguyen duong dau tien: ");
    scanf("%d", &a);
    printf("Nhap so nguyen duong thu 2: ");
    scanf("%d", &b);
    if (a <= 0 || b <= 0) {
        printf("Hay nhap vao so nguyen duong!\n");
        return 1;
    }
    while (a != b) {
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    }
    printf("Uoc chung lon nhat cua 2 so la: %d\n", a);
    return 0;
}
