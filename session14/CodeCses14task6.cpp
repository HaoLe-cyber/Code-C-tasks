#include <stdio.h>
#include <string.h>

int main(){
    char s[100]="Hello world!";
    int n = strlen(s), aphabetCount = 0;
    for (int i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            aphabetCount++;
        }
    }
    printf("So ki tu la chu cai trong chuoi la: %d\n", aphabetCount);
    return  0;
}