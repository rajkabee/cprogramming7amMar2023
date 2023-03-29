#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[]= {9,7,5,3,1};
    int i,j, k;

    for(j=0; j<4; j++)
    {
        for(i=0; i<4-j; i++)
        {
            if(arr[i]>arr[i+1])
            {
                arr[i]+=arr[i+1];
                arr[i+1]=arr[i]-arr[i+1];
                arr[i]-=arr[i+1];
            }
            /*
            for(k=0; k<5; k++)
            {
                printf("%d\t", arr[k]);
            }
            printf("\n");
            */
        }
    }
    for(k=0; k<5; k++)
    {
        printf("%d\t", arr[k]);
    }
    getch();
}
