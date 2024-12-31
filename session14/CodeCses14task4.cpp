#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = "Hello world!";
    int n = strlen(s);
    int count = 0;
    char countCharacter;
    printf("Nhap vao ki tu can dem: ");
    scanf("%c", &countCharacter);
    for (int i = 0; i < n; i++)
    {
        if (s[i] == countCharacter)
        {
            count++;
        }
    }
    printf("So lan ki tu %c xuat hien trong chuoi la: %d\n", countCharacter, count);
    return 0;
}