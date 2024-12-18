#include <stdio.h>

int main(){
    int array[5];
    printf ("Hay nhap tung phan tu vao mang:\n");
    for (int i = 0; i < 5; i++)
    {
        printf ("Phan tu a[%d]: ", i);
        scanf ("%d", &array[i]);
    }
    printf ("Mang vua nhap la: ");
    for (int i = 0; i < 5; i++)
    {
        printf ("%d ",array[i]);
    }
    
    
    return 0;
}