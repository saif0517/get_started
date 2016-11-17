#include<stdio.h>


int main()
{
int number,x;

number = 10;
x = 2;
// to toggle bit number 2 in  number
// user XOR for toggling bit

number ^= 1 << x;  //10 became 14 : (00000...001010) -----> (00000.....001110) 

printf("%d\n",number);

return 0;
}
