#include <stdio.h>
#include <string.h>

int main(){
    char inputString[100], reversedString[100];
    printf("Nhap vao mot chuoi: ");
    gets(inputString);
    int length = strlen(inputString);
    for (int i = 0; i < length; i++){
        reversedString[i] = inputString[length - i - 1];
    }
    printf("Chuoi dao nguoc la: %s", reversedString);
    return 0;
}