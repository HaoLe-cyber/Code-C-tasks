#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap vao ngay: ");
    scanf("%d", &day);
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        printf("Ngay thang nam khong hop le\n");
        return 0;
    }
    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31;
            break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                daysInMonth = 29;
            } else {
                daysInMonth = 28;
            }
            break;
        default:
            printf("Ngay thang nam khong hop le\n");
            return 0;
    }

    if (day > daysInMonth) {
        printf("Ngay thang nam khong hop le\n");
    } else {
        printf("Ngay thang nam hop le\n");
    }

    return 0;
}
