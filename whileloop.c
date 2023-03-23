#include<stdio.h>
#include<conio.h>
void main(){
    int i=0, res=0;
    while(i<11){
        printf("%d is less than 5\n", i);
        res=res+i;
        i++;
    }
    printf("result: %d", res);
    getch();
}
