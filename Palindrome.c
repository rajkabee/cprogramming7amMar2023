#include<stdio.h>
#include<conio.h>
void main(){
    int n, t, rem, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    t=n;
    rev=0;
    while(t!=0){
        rem=t%10;
        rev=10*rev+rem;
        t/=10;
    }
    if(n==rev){
        printf("Palindrome!");
    }
    else{
        printf("Not a Palindrome!");
    }
    getch();
}
