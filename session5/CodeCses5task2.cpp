#include <stdio.h>

int main(){
    int og=5;
    int n;
    for (int i=1; i<=og+1; i++){
        printf ("Hay nhap vao gia tri n: ");
        scanf ("%d", &n);
        if (n == og){
            printf ("So n da trung voi so da cho!");
            break;
        }
    }
    return 0;
}