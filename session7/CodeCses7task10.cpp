#include <stdio.h>
#include <math.h>

int main(){
    int n, i;
    printf ("Nhap vao so phan tu trong mang: ");
    scanf ("%d", &n);
    if (n<=0)
    {
        printf ("Vui long nhap n > 0");
        return 1;
    }
    int array[n];
    printf ("Hay nhap tung phan tu vao mang:\n");
    for (i = 0; i < n; i++)
    {
        printf ("Nhap phan tu a[%d] la so nguyen to: ", i);
        scanf ("%d", array + i);
    }
    printf ("Mang chi chua so nguyen to la:\n");
    for ( i = 0; i < n; i++)
    {
        int isPrime=1;
        if (array[i]<1)
        {
            isPrime = 0;
        }else{
            for (int j = 2; j <= sqrt(array[i]); j++)
            {
                if (array[i]%j==0)
                {
                    isPrime=0;
                    break;
                }
                
            }
        if (isPrime)
        {
            printf ("%d ", array[i]);
        }
            
        }       
        
    }
    return 0;
}