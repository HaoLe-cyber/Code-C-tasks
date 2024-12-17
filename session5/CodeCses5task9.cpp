#include <stdio.h>

int main() {
    int options, a = 0, b = 0, c = 0;
    int sum, min, max;
    float avg;

    do {
        printf("\nMENU\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Hay nhap vao lua chon cua ban (1-6): ");
        scanf("%d", &options);

        switch (options) {
            case 1:
                printf("Nhap so thua nhat: ");
                scanf("%d", &a);
                printf("Nhap so thu 2: ");
                scanf("%d", &b);
                printf("Nhap so thu 3: ");
                scanf("%d", &c);
                printf("Cac so da nhap: %d, %d, %d\n", a, b, c);
                break;

            case 2:
                sum = a + b + c;
                printf("Tong 3 so a: %d\n", sum);
                break;

            case 3:
                avg = (a + b + c) / 3.0;
                printf("Trung binh cong 3 so la: %.2f\n", avg);
                break;

            case 4:
                min = a;
                if (b < min) min = b;
                if (c < min) min = c;
                printf("So nho nhat la: %d\n", min);
                break;

            case 5:
                max = a;
                if (b > max) max = b;
                if (c > max) max = c;
                printf("So lon nhat la: %d\n", max);
                break;

            case 6:
                printf("Chuong trinh da ket thuc.\n");
                break;

            default:
                // Lựa chọn không hợp lệ
                printf("Vui long nhap dung cu phap lua chon (1-6).\n");
                break;
        }
    } while (options != 6); // Lặp lại cho đến khi chọn "Thoát"

    return 0;
}
