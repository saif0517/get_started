#include<stdio.h>

int main()
{
        int number,bit,i=31;
        number = 20;
        //let assume the size of integer is 32 bits
        while(i>=0)
        {
        bit = (number >> i) & 1;
        printf("%d",bit);
        i--;
        }
printf("\n");
return 0;
}
