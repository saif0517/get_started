#include<stdio.h>

int main()
{
// to check xth bit of a number

int number,x,bit;
number = 10;
x = 3;

// to check the 3rd bit of number

bit = (number >> x) & 1;
/* number = ...0000000000001010
   x = 2
   bit = ...000000000010 & 1*/
printf("%d\n",bit);


}
