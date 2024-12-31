#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    printf("Nhap vao mot chuoi ki tu: ");
    gets(s);
    int n = strlen(s);
    printf("Chuoi ki tu vua nhap la: %s\n", s);
    printf("Chieu dai cua chuoi la: %d\n", n);
    return 0;
}