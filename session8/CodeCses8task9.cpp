#include <stdio.h>

int main(){
    int count,maxCount = 0, maxFrequent , n;
    printf ("Nhap vao so phan tu trong mang: ");
    scanf ("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf ("Nhap vao phan tu a[%d]: ", i);
        scanf ("%d", arr + i);
    }
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxFrequent = arr[i];
        }
        
    }
    printf ("Phan tu xuat hien nhieu lan nhat la: %d", maxFrequent);
    

    return 0;
}