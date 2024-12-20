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
    int addIndex, addElement;
    printf ("Hay nhap vi tri ma ban muon them vao: ");
    scanf ("%d", &addIndex);
    if (addIndex <0 || addIndex >100)
    {
        printf ("Vui long hap dung vi tri chen (0-100)!!");
        return 1;
    }else {
        printf ("Hay nhap phan tu ban muon nhap: ");
        scanf ("%d", &addElement);
    }
    if (addIndex >= currentLength)
    {
        arr[currentLength++] = addElement;
    }else if (addIndex < currentLength)
    {
        for (i = currentLength; i > addIndex; i--)
        {
            arr[i] = arr [i-1];
        }
        arr[i] = addElement;
        currentLength++;
    }
    printf ("Mang sau khi da them la:\n");
    for ( i = 0; i < currentLength; i++)
    {
        printf ("%d ", arr[i]);
    }
    return 0;
}