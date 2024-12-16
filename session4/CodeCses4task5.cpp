#include <stdio.h>

int main(){
    int a,b,c;
    printf ("hay nhap vao 3 so nguyen: ");
    scanf ("%d%d%d", &a, &b, &c);
    if (a<c && c<b){
       printf ("C nam giua A va B");
    }
    else {
        printf ("C khong nam giua A va B");
    }
return 0;
}