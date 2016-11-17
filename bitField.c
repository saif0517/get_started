#include<stdio.h>

struct bits{
        //memory occupied is 1+2 = 3 bit
        unsigned char singleBit:1;
        unsigned int doubleBit:2;
        int integer;
};


int main()
{
        struct bits bitField;
        bitField.singleBit = 7;
        printf("%d\n",bitField.singleBit);
        bitField.singleBit = 6;
        printf("%d\n",bitField.singleBit);

        printf("\nSize of structure Bits :%d\n",sizeof(struct bits));
return 0;
}
