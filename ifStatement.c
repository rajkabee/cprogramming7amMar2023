#include<stdio.h>
#include<conio.h>
void main(){
    int age;
    printf("How old are you?");
    scanf("%d", &age);
    if(age<18){
        printf("You are a minor!");
        printf("Let me get you a lollypop!");
    }
    else if(age<60){
        printf("You are an adult!");
    }
    else{
        printf("You are a senior citizen!");
    }


    /*
    char ch;
    printf("How old are you?");
    scanf("%f", &age);
    printf("Your age: %.0f", age);
    printf("Enter a character: \n:-");
    scanf(" %c", &ch);
    printf("Character : %c", ch);
    */
    getch();
}
