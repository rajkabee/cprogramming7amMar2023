#include<stdio.h>
#include<conio.h>
void main(){
    printf("Operators\n");

    int x=5;
    int y=7;
    int z=34;
    x = x+y;
    x = 10/3;
    x = 10%3;
    printf("x: %d \n", x);
    x=x+1;
    x+=1;
    x++;
    ++x;
    printf("x: %d \n", x);
    getch();
}
//Operators
/*
    =   assignment operator
    Arithmetic Operators
    +
    -
    /
    *
    %   modulus operator    remainder
        combimation operator
            +=
            -=
            /=
            *=
            %=

        x=5;
        x=x+3;  =>  x+=3;
        x=x-3;  =>  x-=3;

        Unary Operators:
        ++      increment op
        --        decrement op

        x=7;
        x=x+1;      x+=1;       x++;        ++x;        =>x=8;

        x=5;  x++;        x=6;
        x=5; ++x;        x=6;
        x=5; x--;          x=4;
        x=5; --x;          x=4;


        x=5; y=x++;     y=5; x=6;   post increment
        x=5; y=++x;     x=6; y=6;   pre increment


        Conditional Operators
        ==      equals to operator
        ===     Equivalent op
        >
        <
        >=
        <=
        age>=18

        Logical Operator
        OR      ||
        AND     &&
        XOR     ^
        NOT     !
        age>=18  and age<=35

        A   B   A||B    A&&B    A^B
        0   0   0           0           0
        0   1   1           0           1
        1   0   1           0           1
        1   1   1           1           0

        A   !A
        0   1
        1   0


        Bitwise Operator
        byte b=12;      00001100

*/
