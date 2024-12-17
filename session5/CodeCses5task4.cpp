#include <stdio.h>

int main(){
    int n,result;
    printf ("Hay nhap vao gia tri n (1-10): ");
    scanf ("%d", &n);
    if (n<1 || n>10){
        printf ("Hay nhap dung gia tri n tu 1-10");
    }
    else {
        for (int i = 1; i <= 10; i++)
        {
            result = n*i;
            printf ("%d * %d = %d\n", n, i, result);
        }
        
    }
    return 0;
}