#include <stdio.h>
#include <math.h>

int main(){
    int n,count,num = 2;
    printf ("Nhap vao so nguyen duong n: ");
    scanf ("%d", &n);
    if (n<0)
    {
        printf ("Vui long nhap vao gia tri n > 0!");
        return 0;
    }
    while (count < n)
    {
        int isPrime =1;
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
            
        }
        if (isPrime)
        {
            printf ("%d ", num);
            count++;
        }
        num++;
    }
    
    return 0;
}