#include <stdio.h>

int main(){
    int n;
    printf ("Nhap vao so phan tu trong mang: ");
    scanf ("%d", &n);
    if (n<=0)
    {
        printf ("Vui long nhap n > 0");
        return 1;
    }
    int array[n];
    printf ("Hay nhap tung phan tu vao mang:\n");
    for (int i = 0; i < n; i++)
    {
        printf ("Phan tu a[%d]: ", i);
        scanf ("%d", array + i);
    }
    printf ("Mang vua nhap la: ");
    for (int i = 0; i < n; i++)
    {
        printf ("%d ",array[i]);
    }
    return 0;
}