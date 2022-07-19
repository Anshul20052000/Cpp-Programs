#include<conio.h>
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Value of N : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<n-i;j++)
        {
            printf(" *");
        }
        for(int j=1;j<=i;j++)
        {
            printf(" %d",j);
        }
        for(int j=i-1;j>0;j--)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
        for(int i=n;i>0;i--)
    {
        for(int j=0;j<n-i+1;j++)
        {
            printf(" *");
        }
        for(int j=1;j<=i-1;j++)
        {
            printf(" %d",j);
        }
        for(int j=i-2;j>0;j--)
        {
            printf(" %d",j);
        }
        printf("\n");

    }
    return 0;
}

