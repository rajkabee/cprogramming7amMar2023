#include<stdio.h>
#include<conio.h>
void main(){
    int num, dig, t, rem, i, pv, armv;
    printf("Enter a number: ");
    scanf("%d", &num);
    dig=0;
    t=num;
    while(t!=0){
        t/=10;
        dig++;
    }
    //printf("number of digits: %d\n", dig);
    t=num;
    armv=0;
    while(t!=0){
        rem=t%10;
        i=0;
        pv=1;
        while(i!=dig){
            pv*=rem;
            i++;
        }
        //printf("power value: %d\n", pv);
        armv+=pv;
        t/=10;
    }
    //printf("Armstrong Value: %d\n", armv);
    if(num==armv){
        printf("Given number is a armstrong number!");
    }
    else{
        printf("Given number is not a armstrong number!");
    }
    getch();
}
