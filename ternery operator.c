#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    int n;
    printf("enter 'a' or 'b':");
    scanf("%c", &ch);
    //n=ch=='a'?65:66;
    n=ch=='a'?65:ch=='b'?66:0;
    printf("ASCII Value: %d", n);
}
/*
Syntax:
ch='a';
n=ch=='a'?65:66;
n=65;
*/
