#include<stdio.h>
#include<conio.h>
void main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<2){
        printf("Neither prime nor composite!");
    }
    else{
        i=2;
        while(i<=n/2){
            if(n%i==0){
                break;
            }
            i++;
        }
        if(i>n/2){
            printf("Prime!");
        }
        else{
            printf("Composite!");
        }
    }


    getch();
}
