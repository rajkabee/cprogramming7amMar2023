#include<stdio.h>
#include<conio.h>
void main(){
    int n, dig;
    printf("Enter a number: ");
    scanf("%d", &n);
    dig=0;
    while(n!=0){
        n=n/10;
        dig++;
    }
    printf("No. of digits: %d", dig);
    getch();
}
