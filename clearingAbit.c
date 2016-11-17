#include<stdio.h>


int main()
{
int number,x;

number = 10;
x = 1;
// have to clear xth bit in number
// for this use AND 

number &= ~(1<<x); // 10 becomes 8 while clearing 1st bit: (000.....001010) becomes (00000.....001000)

printf("%d\n",number);

return 0;
}
