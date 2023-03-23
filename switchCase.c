
#include<stdio.h>
#include<conio.h>
void main(){
    char ch;
    printf("------MENU------\n");
    printf("a. Americano \n");
    printf("b. Mochaccino \n");
    printf("c. Cappuccino \n");
    printf("Choice: ");
    scanf("%c", &ch);
    switch(ch){
    case 'a':
        printf("Americano is served!");
        break;
    case 'b':
        printf("Mochaccino is served!");
        break;
    case 'c':
        printf("Cappuccino is served");
        break;
    default:
        printf("Invalid Choice!");
    }
    getch();
}
