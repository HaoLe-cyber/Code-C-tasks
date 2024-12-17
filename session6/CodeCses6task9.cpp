#include <stdio.h>
#include <math.h>

int main(){
    for (int num = 100; num <= 999; num++)
    {
        int hundreds = num/100;
     int tens = (num/10) %10;
        int unit = num%10;
        int sum = pow (hundreds, 3) + pow (tens, 3) + pow (unit, 3);
        if (sum == num)
        {
           printf ("%d\n", num);
      } 
    }
   // int a,b,c, num, sum;
  //  for (a=1,b=0,c=0; a<=9; a++,b++,c++){
   //     num = (a*100)+(b*10)+c;
   //     sum = pow (a, 3) + pow (b, 3) + pow (c, 3);
   //     if (sum = num)
   //     {
    //        printf ("%d\n", num);
    //        break;
    //    }
   // }
    
    return 0;
}   