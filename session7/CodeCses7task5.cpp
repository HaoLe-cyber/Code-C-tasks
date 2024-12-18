#include <stdio.h>

int main() {
    int array[5] = {10, 3, 15, 7, 2};
    int max = array[0];
    int min = array[0];
    for (int i = 1; i < 5; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf ("Phan tu lon nhat: %d\n", max);
    printf ("Phan tu nho nhat: %d\n", min);
    return 0;
}
