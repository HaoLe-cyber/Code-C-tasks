#include <stdio.h>

int greatestCommonDivisor(int a, int b){
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main(){
    int a, b;
    printf("Nhap so a: ");
    scanf("%d", &a);
    printf("Nhap so b: ");
    scanf("%d", &b);
    printf("Uoc chung lon nhat cua %d va %d la: %d", a, b, greatestCommonDivisor(a, b));
    return 0;
}