#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    int n,i;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        if(n<2)
        {
            printf("Neither prime nor composite!");
        }
        else
        {
            i=2;
            while(i<=n/2)
            {
                if(n%i==0)
                {
                    break;
                }
                i++;
            }
            if(i>n/2)
            {
                printf("Prime!");
            }
            else
            {
                printf("Composite!");
            }
        }
        printf("Do you want to repeat(y/n)?\n");
        scanf(" %c", &ch);
    }
    while(ch=='y');
    getch();
}
