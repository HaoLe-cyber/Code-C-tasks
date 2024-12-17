#include <stdio.h>

int main(){
    printf ("%45c CACULATOR\n" );
    printf ("1. Tong 2 so\n");
    printf ("2. Hieu 2 so\n");
    printf ("3. Tich 2 so\n");
    printf ("4. Thuong 2 so\n");
    printf ("5. Thoat\n");
    int op;
    float num1,num2,result;
    printf ("Hay nhap lua chon tinh toan cua ban (1-5): ");
    scanf ("%d", &op);
    printf ("Hay nhap vao so dau tien #1: ");
    scanf ("%f", &num1);
    printf ("Hay nhap vao so dau tien #2: ");
    scanf ("%f", &num2);
    switch (op)
    {
    case 1:
        result= num1 + num2;
        printf ("Ket qua la: %.2f", result);
        break;
    case 2:
        result= num1 - num2;
        printf ("Ket qua la: %.2f", result);
        break;
    case 3:
        result= num1 * num2;
        printf ("Ket qua la: %.2f", result);
        break;
    case 4:
        result= num1 / num2;
        printf ("Ket qua la: %.2f", result);
        break;
    case 5:
        printf ("Da thoat khoi may tinh");
        break;
    default:
        printf ("Hay nhap dung lua chon (1-5)!!!");
        break;
    }
    return 0;
}