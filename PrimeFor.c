#include<stdio.h>
#include<conio.h>
void main(){
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<2){
        printf("Neither prime nor composite!");
    }
    else{
        for(i=2; i<=n/2; i++){
            if(n%i==0){
                break;
            }
            //printf("%d\n", i);
        }
        if(i>n/2){
            printf("Prime");
        }
        else{
            printf("Composite");
        }
    }
    getch();
}
