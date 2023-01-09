#include <stdio.h>

int main()
{
    //BITWISE OPERATORS = special operators used in bit level programming
    // & = AND
    // | = OR
    // ^ = XOR
    // << LEFT SHIFT
    // >> RIGHT SHIFT

    int x = 6; // 6 =000001100
    int y = 12; // 12 = 00001100
    int z = 0;// 0 = 00000100

    z = x & y;

    printf("AND = %d\n", z);

    z = x | y;
    printf("OR = %d\n", z);

    z = x ^ y;
    printf("XOR = %d\n", z);

    z = x << 2;
    printf("Left shift: %d\n", z);

    z = x >> 2;
    printf("RIGHT SHIFT: %d\n",z);



    return 0;

}