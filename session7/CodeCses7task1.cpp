#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array) / sizeof(array[0]);
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < length; i++) {
        printf("Phan tu thu %d: %d\n", i + 1, array[i]);
    }
    printf("Do dai cua mang la: %d\n", length);
    return 0;
}
