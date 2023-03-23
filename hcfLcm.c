#include<stdio.h>
#include<conio.h>
void main(){
    int a,b, hcf, lcm, t, c, d;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    /*
    hcf=a<b?a:b;// con?if_true:else;
    while(!(a%hcf==0 && b%hcf==0)){
        hcf--;
    }
    */
    c=a;
    d=b;
    while(!(b%a==0)){
        b=b%a;
        //swap
        t=a;
        a=b;
        b=t;
    }
    hcf=a;
    printf("hcf=%d\n", hcf);
    /*
    lcm=c<d?d:c;
    while(!(lcm%c==0 && lcm%d==0)){
        lcm++;
    }
    */
    lcm=(c*d)/hcf;
    printf("LCM : %d", lcm);
    getch();
}
