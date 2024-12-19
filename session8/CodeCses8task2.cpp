#include <stdio.h>

int main(){
    int num, found=0, arr[5]= {1, 95, 75, 6, 5};
    printf ("Hay nhap vao phan tu de kiem tra: ");
    scanf ("%d", &num);
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]==num)
        {
            printf ("Vi tri phan tu trong mang la arr[%d].", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
            printf ("Phan tu khong ton tai trong mang!");
    }
    return 0;
}