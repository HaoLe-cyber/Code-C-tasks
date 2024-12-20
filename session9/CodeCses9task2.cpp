#include <stdio.h>

int main(){
    int n,i ;
    printf ("Hay nhap so luong phan tu co trong mang: ");
    scanf ("%d", &n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf ("Nhap phan tu arr[%d]: ", i);
        scanf ("%d", arr +i);
    }
    int changeIndex, changeElement;
    printf ("Hay nhap vao vi tri ban muon thay doi: ");
    scanf ("%d", &changeIndex);
    if (changeIndex<0 || changeIndex >n)
    {
        printf ("Vui long chon dung pham vi mang da chon tu truoc (0-%d)!", n);
        return 1;
    }
    printf ("Hay nhap vao phan tu ban muon thay doi: ");
    scanf ("%d", &changeElement);
    arr[changeIndex] = changeElement;
    printf ("Mang sau khi thay doi la: ");
    for ( i = 0; i < n; i++)
    {
        printf ("%d ", arr[i]);
    }
    
    return 0;
}