#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = "Hello world!";
    int n = strlen(s);
    printf("tung ki tu trong chuoi la:\n");
    for (int i = n; i >= 0; i--)
    {
        printf("%c ", s[i]);
    }
    return 0;
}