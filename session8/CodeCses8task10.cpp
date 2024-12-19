#include <stdio.h>

int main(){
    int count,maxCount = 0, frequentSize = 0, n;
    printf ("Nhap vao so phan tu trong mang: ");
    scanf ("%d", &n);
    int arr[n];
    int frequent[n];
    for (int i = 0; i < n; i++)
    {
        printf ("Nhap vao phan tu a[%d]: ", i);
        scanf ("%d", arr + i);
    }
    // duyet qua tung phan tu tron arr[n] va tim số lần xuất hiện nhiều nhất và cập nhật vào maxCount
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
        }
    }
    // duyệt lại danh sách 1 lần nữa, và tìm xem có phần tử arr[i] nào có cùng số lần xuất hiện với maxCount đã cập nhật ở trên và sau đó thêm vào mảng frequent[n]
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
        if (count == maxCount)
        {
            int isNew = 1;
            for (int h = 0; h < frequentSize; h++)
                {
                    if (frequent[h] == arr[i])
                    {
                        isNew = 0;
                        break;
                    }
                }
                if (isNew)
                {
                    frequent[frequentSize++] = arr[i];
                }
        }
    }
    printf ("Cac phan tu co so lan xuat hien nhieu nhat la:\n");
    for (int h = 0; h < frequentSize; h++)
    {
         printf ("%d ", frequent[h]);
    }
    return 0;
}