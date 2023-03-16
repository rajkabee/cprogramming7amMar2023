#include<stdio.h>
#include<conio.h>
int main(){
    //byte b;
    short s;
    s= 32767;
    printf("short s: %d \n", s);
    int i=2147483647;
    printf("int i: %d \n", i);
    long l=9223372036854775807l;
    printf("long l: %d \n", l);

    float f=123.456f;
    double d = 123.456;
    printf("float f: %.2f \ndouble d: %0.2f \n", f, d);

    char ch = 'r';
    printf("char ch: %c \n", ch);




    return 0;
}

//this is a single line comment
/*
Multi line comments
Data Types:
    Integer     -/+Whole Numbers
        byte    8 bits long range: -128 to +127
        short   2bytes/16bits   range:  -32768 to +32767
        int       4bytes/32bits   range: 2,147,483,648
        long    8bytes/64bits   range: 9,223,372,036,854,775,808

        00000000
        00000001
        00000010
        00000011
        00000100
                        11010110=?
                    =0*2^0+1*2^1+1*2^2+0*2^3+1*2^4+0*2^5+1*2^6+(-1)
                    =0+2+4+0+16+0+64+(-1)
                    =-86

        Float
            float         32bits
            double      64bits

        Character
            char       16bits

        Boolean
            bool
*/
