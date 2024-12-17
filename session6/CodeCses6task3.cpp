#include <stdio.h>

int main(){
    int password=10072006;
    int inputPassword;
    printf ("Hay nhap mat khau: ");
    scanf ("%d", &inputPassword);
    if (password == inputPassword){
        printf ("Mat khau chinh xac!");
    }
    else {
        printf ("Mat khau khong chinh xac!");
    }
    return 0;

}