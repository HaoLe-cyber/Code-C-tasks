#include <stdio.h>

int main(){
    int arr[100], currentLength = 0, i, n;
    printf ("Hay nhap so phan tu trong mang: ");
    scanf ("%d", &n);
    currentLength = n;
    for (i = 0; i < n; i++)
    {
        printf ("Hay nhap vao phan tu arr[%d]: ", i);
        scanf ("%d", arr + i);
    }
    int deleteIndex;
    printf ("Hay nhap vi tri phan tu muon xoa: ");
    scanf ("%d", &deleteIndex);
    if (deleteIndex < 0 || deleteIndex > currentLength)
    {
        printf ("Hay nhap dung pham vi cua mang (0- %d)", currentLength);
        return 1;
    }else {
        for ( i = deleteIndex; i < currentLength; i++)
        {
            arr[i]= arr[i+1];
        }
        currentLength--;
    }
    printf ("Mang sau khi thay doi la: ");
    for ( i = 0; i < currentLength; i++)
    {
        printf ("%d ", arr[i]);
    }
    
    return 0;
}