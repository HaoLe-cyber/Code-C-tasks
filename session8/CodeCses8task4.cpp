#include <stdio.h>

int main(){
    int max, arr[2][3]= {{1,12,3},{47,6,23}};
    max = arr[0][0];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j]>max)
            {
                max=arr[i][j];
            }
        }
    }
    printf ("Phan tu lon nhat trong mang la: %d", max);
    return 0;
}