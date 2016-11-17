#include<stdio.h>



//setting x

int main()
{
int x,number = 10;
x=0;
number|= 1<<x; //shifts 1 to xth position and set that particular bit.

printf("%d\n",number);

return 0;
}
