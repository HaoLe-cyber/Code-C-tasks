#include <stdio.h>

int main(){
    int array[]= {5, 9, 42, 74, 86};
    int hasEven = 0;
    printf ("Cac phan tu la so chan trong mang la:\n");
    for (int i = 0; i < 5; i++)
    {
        if (array[i] % 2==0)
        {
            printf ("%d ", array[i]);
            hasEven = 1;
        }

    }
    if (!hasEven)
    {
        printf ("Mang khong chua so chan!");
    }
    return 0;
}