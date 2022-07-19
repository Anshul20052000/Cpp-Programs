#include<conio.h>
#include<stdio.h>
int main()
{
    int n,a;
    printf("Enter the Number of Rows : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        a=65;
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int j=i;j>0;j--)
        {
            printf(" %c",a);
            a=a+1;
        }
        a=a-2;
        for(int j=(i-1);j>0;j--)
        {
            printf(" %c",a);
            a=a-1;
        }
        printf("\n");
    }
    for(int i=n;i>0;i--)
    {
        a=65;
        for(int j=n-i;j>0;j--)
        {
            printf("  ");
        }
        for(int j=i;j>0;j--)
        {
            printf(" %c",a);
            a=a+1;
        }
        a=a-2;
        for(int j=(i-1);j>0;j--)
        {
            printf(" %c",a);
            a=a-1;
        }
        printf("\n");
    }
}
