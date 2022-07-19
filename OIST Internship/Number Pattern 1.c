#include<conio.h>
#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=5;j>=i;j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    for(int i=5;i>0;i--)
    {
        for(int j=i;j>=1;j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
}
