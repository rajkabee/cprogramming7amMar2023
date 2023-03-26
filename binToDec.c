#include<stdio.h>
#include<conio.h>
void main(){
    int bin, dec, m, rem;
    printf("Enter a binary number: ");
    scanf("%d", &bin);
    m=1;
    dec=0;
    while(bin!=0){
        rem=bin%10;
        dec+=rem*m;
        m*=2;
        bin/=10;
    }
    printf("Decimal Value: %d", dec);

    getch();
}
