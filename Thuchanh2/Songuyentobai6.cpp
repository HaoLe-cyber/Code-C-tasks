#include <stdio.h>
#include <math.h>

int main() {
    int n;
    printf("Hay nhap vao gia tri n: ");
    scanf("%d", &n);

    int count = 0;
    int current = 2;

    printf("%d so nguyen to dau tien la:\n", n);
    while (count < n) {
        int isPrime = 1;
        for (int i=2; i<= sqrt(current);i++){
            if (current%i==0){
                isPrime=0;
            }
        }
        if (isPrime==1) {
            printf("%d ", current);
            count++;
        }
        current++;
    }
    return 0;
}
