#include<stdio.h>
#include<conio.h>
void main(){
    //hello(5);
    int sum;
    sum=add(5,7);
    printf("SUM: %d", sum);
    getch();
}

void hello(int n){
    int i;
    for(i=0; i<n; i++){
        printf("Hello, welcome to c programming!\n");
    }
}

int add(int a, int b){
    int s;
    s=a+b;
    return s;
}

float pi(){
    return 3.1415f;
}
