#include <stdio.h>

int main() {
    int number, evenNum=0, oddNum=0;
    for (int i = 1; i <= 5; i++) {
        printf("Hay nhap vao so thu %d: ", i);
        scanf("%d", &number);
        if (number % 2 == 0) {
            evenNum++;
        }
        else {
            oddNum++;
        }
    }
    printf("So luong so chan la: %d\n", evenNum);
    printf("So luong so le la: %d\n", oddNum);
    return 0;
}