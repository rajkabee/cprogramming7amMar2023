#include<stdio.h>
#include<conio.h>
void main(){
    int bin, dec, revBin, rem;
    printf("Enter a decimal number: ");
    scanf("%d", &dec);
    revBin=1;
    while(dec!=0){
        rem=dec%2;
        revBin = revBin*10+rem;
        dec/=2;
    }
    printf("revBin: %d\n", revBin);
    bin=0;
    while(revBin!=1){
        rem=revBin%10;
        bin=bin*10+rem;
        revBin/=10;
    }
    printf("Binary Value: %d", bin);
    getch();
}
