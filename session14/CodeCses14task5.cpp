#include <stdio.h>
#include <string.h>

int main(){
    char s[100] = "Hello world!";
    int n = strlen(s), countWord = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            countWord++;
        }
    }
    printf("So tu trong chuoi la: %d\n", countWord);
    return 0;
}