#include<stdio.h>
#include<conio.h>
void main(){
    int i,n;
    for(n=2; n<101; n++){
        for(i=2; i<=n/2; i++){
            if(n%i==0){
                break;
            }
        }
        if(i>n/2){
            printf("%d\n", n);
        }
    }
    getch();
}
