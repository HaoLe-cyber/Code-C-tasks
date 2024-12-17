#include <stdio.h>

int main(){
    int n,result;
     for ( int j = 1; j <= 9; j++)
        {
            for (int i = 1; i <= 10; i++)
        {
            result = j*i;
            printf ("%d * %d = %d\n", j, i, result);
        }
        }
        
    return 0;
}